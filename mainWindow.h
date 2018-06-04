//
// Created by marco on 6/4/18.
//
/* TODO:
 *  - Make the GUI a single tab application
 *  - Use Signals to convert the user input in real time
 *  - Implement the File Conversion Method
 */

#ifndef MORSEGUI_MAINWINDOW_H
#define MORSEGUI_MAINWINDOW_H
#include <QtWidgets/QMainWindow>
#include <QClipboard>
#include "ui_mainWindow.h"
#include "about.h"
#include "morse.h"

class mainWindow : public QMainWindow {
    Q_OBJECT
public:
    mainWindow(QWidget *parent = Q_NULLPTR);
    ~mainWindow();
private slots:
    //Encode methods
    void on_btnEncode_clicked();
    void on_btnCopyToClipboard_clicked();
    //Decode methods
    void on_btnDecode_clicked();
    void on_btnCopy_clicked();
public slots:
    void on_actionExit_triggered();
    void on_actionAbout_triggered();

private:
    Ui::mainWindowClass *ui;
    about *aboutWin;

    QString user_input;
    std::string processed_output;
};


#endif //MORSEGUI_MAINWINDOW_H
