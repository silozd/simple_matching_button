#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define LIME    1
#define RED     2

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    char current_color;
    char old_color;

private slots:

    //void game();
    void card1_renk_eski_haline();
    void card2_renk_eski_haline();
    void card3_renk_eski_haline();
    void card4_renk_eski_haline();

    void on_card1_clicked();
    void on_card2_clicked();
    void on_card3_clicked();
    void on_card4_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer_1;
    //QPushButton *cards[4];
    //Button MyButton = new Button();
};

#endif // MAINWINDOW_H
