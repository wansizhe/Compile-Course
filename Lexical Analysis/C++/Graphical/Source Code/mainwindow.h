#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionOpen_triggered();

    void on_actionHelp_triggered();

private:
    Ui::MainWindow *ui;

    void selectFile();

};

#endif // MAINWINDOW_H
