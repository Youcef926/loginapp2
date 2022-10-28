#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "page.h"
#include "compte.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void setcompte(compte c);
    ~Dialog();

private slots:


    void on_emission_button_clicked();

    void on_pushButton_invite_clicked();

    void on_next_crud_clicked();

    void on_next_crud_2_clicked();

private:
    Ui::Dialog *ui;
    page *p;
};

#endif // DIALOG_H
