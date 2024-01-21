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
    Q_DISABLE_MOVE(MainWindow)

  public:
    static MainWindow *getInstance();

  private:
    explicit MainWindow(QMainWindow *parent = nullptr);
    ~MainWindow() override;
    static MainWindow *m_instance;

    void createInitialMenus();
    Ui::MainWindow *ui;
    QMenu m_saveMenu, m_datasMenu, m_addDataMenu;
    QToolButton m_saveMenuBtn, m_datasMenuBtn, m_addDataMenuBtn;
};

#endif  // MAINWINDOW_HPP
