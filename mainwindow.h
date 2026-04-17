#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
private slots:
    void digit_pressed();
    void on_pushButton_decimal_released();
    void on_pushButton_plus_minus_released();
    void on_pushButton_percent_released();
    void on_pushButton_binaryOperation();
};
#endif // MAINWINDOW_H
