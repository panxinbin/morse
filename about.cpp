//
// Created by marco on 6/4/18.
//

#include "about.h"

about::about(QWidget *parent) : QMainWindow(parent), ui(new Ui::aboutClass) {
    ui->setupUi(this);
    setFixedSize(362, 267);
}
about::~about() { delete ui; }