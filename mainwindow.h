#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnSubstract_clicked();

    void on_btnMultiply_clicked();

    void on_btnDivide_clicked();

    void on_btnModulus_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
