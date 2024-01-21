#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QMenu>
#include <QToolButton>

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
    void createInitialMenus();
    Ui::MainWindow *ui;
    QMenu m_saveMenu, m_removeMenu, m_addDataMenu;
    QToolButton m_saveMenuBtn, m_removeMenuBtn, m_addDataMenuBtn;
};

#endif  // MAINWINDOW_HPP
