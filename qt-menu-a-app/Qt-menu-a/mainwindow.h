#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {

public:

    MainWindow();


private:

    void createActions();
    void createMenus();

    // main menu item #1
    void openActSlot();
    void printActSlot();
    void exitActSlot();
    // main menu item #2
    void aboutActSlot();

    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *helpMenu;

    // main menu item #1
    QAction *openAct;
    QAction *printAct;
    QAction *exitAct;
    // main menu item #2
    QAction *aboutAct;

};

#endif // MAINWINDOW_H

