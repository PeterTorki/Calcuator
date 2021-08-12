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
//    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_pls_button_clicked();
    void on_min_button_clicked();

    void on_mult_button_clicked();

    void on_div_button_clicked();

    void on_Mod_button_clicked();

    void on_root_button_clicked();

    void on_Gcd_button_clicked();

    void on_Lcm_button_clicked();

    void on_Pow_button_clicked();

    void on_NUM1_textChanged();

    void on_NUM2_textChanged();

    void on_equal_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
