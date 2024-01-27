#include <vtkRenderWindow.h>
#include <vtkSmartPointer.h>

#include <QApplication>

#include "MainWindow.hpp"
#include "Scene.hpp"

int main(int argc, char *argv[]) {
    /* QApplication app(argc, argv);

    MainWindow *instance = MainWindow::getInstance();
    instance->show();

    app.exec();
    return 0; */
    auto window = vtkSmartPointer<vtkRenderWindow>::New();
    Scene scene(window);
}
