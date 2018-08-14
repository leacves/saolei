#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "myitem.h"
#include "myscene.h"
#include "myscenemain.h"
#include <QMainWindow>
#include <QString>
#include <QTime>
#include <QTimer>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void Update();
    void Updatecount();
private slots:
    void on_pushButton_clicked();
    void on_pushButtonrestart_clicked();
    void on_pushButtonexit_clicked();
private:
    Ui::MainWindow *ui;
    myscene *sc;
    myscenemain *scmain;
    QTimer *time_fail_or_win;
    QTime t;
    QTimer *current_time;
};

#endif // MAINWINDOW_H
