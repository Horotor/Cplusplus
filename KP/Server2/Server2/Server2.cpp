#include <winsock2.h>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#pragma comment(lib, "ws2_32.lib")

void logMessage(const std::string& message) {
    std::ofstream logFile("server_log.txt", std::ios::app);
    if (logFile.is_open()) {
        std::time_t currentTime;
        time(&currentTime);
        struct tm timeInfo;
        localtime_s(&timeInfo, &currentTime);
        char buffer[20];
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeInfo);
        logFile << "[" << buffer << "] " << message << std::endl;
        logFile.close();
    }
    else {
        std::cerr << "Failed to open log file for writing." << std::endl;
    }
}

void saveAnswer(const std::string& subject, const std::string& questionNumber, const std::string& answer) {
    std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest";
    std::ofstream answerFile(filename, std::ios::app);
    if (answerFile.is_open()) {
        answerFile << subject << ":" << questionNumber << ":" << answer << std::endl;
        answerFile.close();
        logMessage("Answer saved: " + subject + " - Question " + questionNumber + " - " + answer);
    }
    else {
        logMessage("Failed to open answer file: " + filename);
    }
}

void sendFile(SOCKET clientSocket, const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        logMessage("Failed to open file: " + filename);
        std::string errorMsg = "Failed to open file: " + filename;
        send(clientSocket, errorMsg.c_str(), errorMsg.size(), 0);
        return;
    }

    std::string line;
    std::string fileContents;
    while (std::getline(file, line)) {
        fileContents += line + "\n";
    }

    int bytesSent = send(clientSocket, fileContents.c_str(), fileContents.size(), 0);
    if (bytesSent == SOCKET_ERROR) {
        logMessage("Failed to send file data: " + filename);
    }
    else {
        logMessage("File sent successfully: " + filename);
    }

    file.close();
}

void sendNextQuestionSignal(SOCKET clientSocket) {
    const std::string nextQuestionSignal = "NextQuestion";
    send(clientSocket, nextQuestionSignal.c_str(), nextQuestionSignal.size(), 0);
}

int main() {
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        std::cerr << "WSAStartup failed: " << result << std::endl;
        logMessage("WSAStartup failed with error: " + std::to_string(result));
        return 1;
    }

    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (serverSocket == INVALID_SOCKET) {
        std::cerr << "Error creating socket: " << WSAGetLastError() << std::endl;
        logMessage("Failed to create socket with error: " + std::to_string(WSAGetLastError()));
        WSACleanup();
        return 1;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(12345); // Пример порта

    if (bind(serverSocket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "Bind failed: " << WSAGetLastError() << std::endl;
        logMessage("Bind failed with error: " + std::to_string(WSAGetLastError()));
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }

    if (listen(serverSocket, SOMAXCONN) == SOCKET_ERROR) {
        std::cerr << "Listen failed: " << WSAGetLastError() << std::endl;
        logMessage("Listen failed with error: " + std::to_string(WSAGetLastError()));
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }

    std::cout << "Server listening on port 12345..." << std::endl;
    logMessage("Server started and listening on port 12345.");

    while (true) {
        SOCKET clientSocket = accept(serverSocket, nullptr, nullptr);
        if (clientSocket == INVALID_SOCKET) {
            std::cerr << "Accept failed: " << WSAGetLastError() << std::endl;
            logMessage("Accept failed with error: " + std::to_string(WSAGetLastError()));
            continue;
        }

        // Отладочное сообщение при подключении пользователя
        std::cout << "Client connected. Socket: " << clientSocket << std::endl;
        logMessage("Client connected. Socket: " + std::to_string(clientSocket));

        char buffer[1024];
        int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
        if (bytesReceived <= 0) {
            std::cerr << "Recv failed: " << WSAGetLastError() << std::endl;
            logMessage("Recv failed with error: " + std::to_string(WSAGetLastError()));
            closesocket(clientSocket);
            continue;
        }

        buffer[bytesReceived] = '\0';
        std::cout << "Message from client: " << buffer << std::endl;
        logMessage("Message from client: " + std::string(buffer));

        std::string request(buffer);
        request.erase(request.find_last_not_of(" \n\r\t") + 1); // Remove any trailing whitespace characters

        if (request == "GetGeoQuestion 1") {
            // Отладочное сообщение о запросе на получение вопроса 1
            std::cout << "Sending question 1." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question1.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 2") {
            // Отладочное сообщение о запросе на получение вопроса 2
            std::cout << "Sending question 2." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question2.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 3") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 3." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question3.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 4") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 4." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question4.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 5") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 5." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question5.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 6") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 6." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question6.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 7") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 7." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question7.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 8") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 8." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question8.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 9") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 9." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question9.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetGeoQuestion 10") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 10." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\GeoTest\\Question10.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetMathQuestion 1") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 1." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\MathTest\\Question1.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetMathQuestion 2") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 2." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\MathTest\\Question2.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetMathQuestion 3") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 3." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\MathTest\\Question3.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }
        else if (request == "GetMathQuestion 4") {
            // Отладочное сообщение о запросе на получение вопроса 3
            std::cout << "Sending question 4." << std::endl;
            std::string filename = "C:\\Users\\chete\\OneDrive\\Рабочий стол\\build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug\\Server2\\Server2\\MathTest\\Question4.txt";
            std::cout << "Sending question from file: " << filename << std::endl;
            sendFile(clientSocket, filename);
        }

        else {
            std::cerr << "Invalid command\n";
            send(clientSocket, "Invalid command", 15, 0);
        }

            // Отладочное сообщение при отключении пользователя
        std::cout << "Client disconnected. Socket: " << clientSocket << std::endl;
        logMessage("Client disconnected. Socket: " + std::to_string(clientSocket));

        closesocket(clientSocket);
    }

    closesocket(serverSocket);
    WSACleanup();

    return 0;
}