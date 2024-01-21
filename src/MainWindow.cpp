#include "MainWindow.hpp"

#include "../design/ui_mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->createInitialMenus();
}
MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::createInitialMenus() {
    {  // m_saveMenu
        this->m_saveMenuBtn.setMenu(&this->m_saveMenu);
        this->m_saveMenuBtn.setIcon(QPixmap(":/i/menu-save.svg"));
        this->m_saveMenuBtn.setPopupMode(QToolButton::InstantPopup);
        this->m_saveMenuBtn.setText("Save");
        this->ui->toolBar->insertWidget(this->ui->actionQuit, &this->m_saveMenuBtn);

        this->m_saveMenu.addAction(this->ui->actionSave);
        this->m_saveMenu.addAction(this->ui->actionSave_As);
        this->m_saveMenu.addAction(this->ui->actionSave_All);
    }
    {  // m_removeMenu
        this->m_datasMenuBtn.setMenu(&this->m_datasMenu);
        this->m_datasMenuBtn.setIcon(QPixmap(":/i/menu-data.svg"));
        this->m_datasMenuBtn.setPopupMode(QToolButton::InstantPopup);
        this->m_datasMenuBtn.setText("Remove");
        this->ui->toolBar->insertWidget(this->ui->actionQuit, &this->m_datasMenuBtn);
        this->m_datasMenu.addAction(this->ui->actionRemove_Active_Data);
        this->m_datasMenu.addAction(this->ui->actionRemove_All_Data);
        this->m_datasMenu.addSeparator();
    }
    {  // m_addDataMenu
        this->m_addDataMenuBtn.setMenu(&this->m_addDataMenu);
        this->m_addDataMenuBtn.setIcon(QPixmap(":/i/menu-add.svg"));
        this->m_addDataMenuBtn.setPopupMode(QToolButton::InstantPopup);
        this->m_addDataMenuBtn.setText("Add Data");
        this->ui->toolBar->insertWidget(this->ui->actionQuit, &this->m_addDataMenuBtn);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Arrow);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Cone);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Cube);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Cylinder);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Disk);
        this->m_addDataMenu.addAction(this->ui->action_dataAdd_Sphere);
    }

    // set centered all items
    for (int i = 0; i < this->ui->toolBar->layout()->count(); i++)
        this->ui->toolBar->layout()->itemAt(i)->setAlignment(Qt::AlignCenter);
}
