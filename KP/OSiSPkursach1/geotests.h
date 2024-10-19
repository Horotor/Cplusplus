#ifndef GEOTESTS_H
#define GEOTESTS_H

#include <QDialog>

namespace Ui {
class geoTests;
}

class geoTests : public QDialog
{
    Q_OBJECT

public:
    explicit geoTests(QWidget *parent = nullptr);
    ~geoTests();

private:
    Ui::geoTests *ui;
};

#endif // GEOTESTS_H
