#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}  // namespace Ui
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
    Q_DISABLE_COPY(MainWindow)
  public:
    explicit MainWindow(QMainWindow *parent = nullptr);
    ~MainWindow();

  private:
    Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_HPP