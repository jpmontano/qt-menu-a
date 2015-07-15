#include <QApplication>
#include "mainwindow.h"


int main( int argc, char *argv[] ) {

    QApplication app( argc, argv );
    app.setStyleSheet(
        "QMenuBar::item { spacing: 3px; padding: 1px 8px; \
                          background-color: transparent; }" \
        "QMenuBar::item:pressed { background-color: #717171; \
                                  color: white; }" \
        "QMenuBar { background-color: lightgray; \
                    padding-top: 5px; \
                    padding-left: 8px; }" );


    MainWindow mw;
    mw.show();

  return app.exec();
}
