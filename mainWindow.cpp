//
// Created by marco on 6/4/18.
//

#include "mainWindow.h"

mainWindow::mainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainWindowClass) {
    ui->setupUi(this);
    setFixedSize(474, 471);
    QObject::connect(ui->txtPlainEncode, &QTextEdit::textChanged, this, &mainWindow::encoder);
    QObject::connect(ui->txtDecDecode, &QTextEdit::textChanged, this, &mainWindow::decoder);
}
void mainWindow::on_actionAbout_triggered() {
    aboutWin = new about();
    aboutWin->show();
}
void mainWindow::on_actionEncode_triggered() {
    // Open the input file
    QString inputFile = QFileDialog::getOpenFileName(this,
            tr("Open file to encode"), "",
            tr("Text Files (*.txt);; All Files (*)"));
    // Open the output file
    QString outputFile = QFileDialog::getSaveFileName(this,
            tr("Save file as"), "",
            tr("Text Files (*.txt);; All Files (*)"));
    morse conv(inputFile.toStdString(), outputFile.toStdString());
    conv.file_converter(1);
    //Print an output message
    QMessageBox msg;
    msg.information(0, "OK", "All done!");
}
void mainWindow::on_actionDecode_triggered() {
    // Open the input file
    QString inputFile = QFileDialog::getOpenFileName(this,
            tr("Open file to decode"), "",
            tr("Text Files (*.txt);; All Files (*)"));
    // Open the output file
    QString outputFile = QFileDialog::getSaveFileName(this,
            tr("Save file as"), "",
            tr("Text Files(*.txt);; All Files (*)"));
    morse conv(inputFile.toStdString(), outputFile.toStdString());
    conv.file_converter(2);
    //Print an output message
    QMessageBox msg;
    msg.information(0, "OK", "All done!");
}
void mainWindow::encoder() {
    std::string input = ui->txtPlainEncode->toPlainText().toStdString(), encoded;
    morse encoder(input);
    encoded = encoder.ascii_to_morse();
    ui->txtEncEncode->setText(QString::fromStdString(encoded));
}
void mainWindow::decoder() {
    std::string input = ui->txtDecDecode->toPlainText().toStdString(), decoded;
    morse decoder(input);
    decoded = decoder.morse_to_ascii();
    ui->txtPlainDecode->setText(QString::fromStdString(decoded));
}
void mainWindow::on_actionExit_triggered() { QApplication::exit(0); }
mainWindow::~mainWindow() { delete ui; }