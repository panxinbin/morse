//
// Created by marco on 6/4/18.
//
#ifndef MORSEGUI_MAINWINDOW_H
#define MORSEGUI_MAINWINDOW_H
#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <string>
#include "ui_mainWindow.h"
#include "about.h"
#include "morse.h"

class mainWindow : public QMainWindow {
    Q_OBJECT
public:
    mainWindow(QWidget *parent = Q_NULLPTR);
    ~mainWindow();
public slots:
    void on_actionExit_triggered();
    void on_actionAbout_triggered();
    void on_actionEncode_triggered();
    void on_actionDecode_triggered();
    void encoder();
    void decoder();
private:
    Ui::mainWindowClass *ui;
    about *aboutWin;
};


#endif //MORSEGUI_MAINWINDOW_H

