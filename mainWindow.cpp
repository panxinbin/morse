//
// Created by marco on 6/4/18.
//

#include "mainWindow.h"

mainWindow::mainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainWindowClass) {
    ui->setupUi(this);
    setFixedSize(474, 546);
    ui->txtEncEncode->setReadOnly(true);
    ui->txtDecDecode->setReadOnly(true);
}
void mainWindow::on_btnEncode_clicked() {
    //Get the data and convert it to std::string
    this->user_input = ui->txtPlainEncode->toPlainText();
    std::string converted = this->user_input.toUtf8().constData();
    //Encode the text
    morse enc(converted);
    this->processed_output = enc.ascii_to_morse();
    //Return the result to the GUI
    ui->txtEncEncode->setText(QString::fromStdString(this->processed_output));
}
void mainWindow::on_btnCopyToClipboard_clicked() {
    //Init clipboard object
    QClipboard *clipboard = QApplication::clipboard();
    //Clear the clipboard
    clipboard->clear();
    //Copy the text from txtEncEncode to clipboard
    clipboard->setText(ui->txtEncEncode->toPlainText());
}
void mainWindow::on_btnDecode_clicked() {
    //Get the data and convert it to std::string
    this->user_input = ui->txtPlainDecode->toPlainText();
    std::string converted = this->user_input.toUtf8().constData();
    //Decode the text
    morse dec(converted);
    this->processed_output = dec.morse_to_ascii();
    //Return the result to the GUI
    ui->txtDecDecode->setText(QString::fromStdString(this->processed_output));
}
void mainWindow::on_btnCopy_clicked() {
    //Init clipboard object
    QClipboard *clipboard = QApplication::clipboard();
    //Clear the clipboard
    clipboard->clear();
    //Copy the text from txtEncEncode to clipboard
    clipboard->setText(ui->txtDecDecode->toPlainText());
}
void mainWindow::on_actionAbout_triggered() {
    aboutWin = new about();
    aboutWin->show();
}
void mainWindow::on_actionExit_triggered() { QApplication::exit(0); }
mainWindow::~mainWindow() { delete ui; }