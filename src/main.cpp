#include <QApplication>

#include "MainWindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow *instance = MainWindow::getInstance();
    instance->show();

    app.exec();
    return 0;
}
