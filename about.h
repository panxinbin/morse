//
// Created by marco on 6/4/18.
//

#ifndef MORSEGUI_ABOUT_H
#define MORSEGUI_ABOUT_H
#include <QtWidgets/QMainWindow>
#include "ui_about.h"

class about : public QMainWindow {
    Q_OBJECT
public:
    about(QWidget *parent = Q_NULLPTR);
    ~about();
private:
    Ui::aboutClass *ui;
};


#endif //MORSEGUI_ABOUT_H

