#include "MainWindow.hpp"

#include "../design/ui_mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}
MainWindow::~MainWindow() {
    delete ui;
}