#include "mainwindow.h"
#include <QApplication>
#include <iostream>

void funk(){
    while(1){
        std::cout<<"HUI";
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Test

    return a.exec();
    //ПИСЮН ывп
    //ВАЖНЫЕ ИЗМЕНЕНИЯ
    //another ПИСЮН


    funk();


    // НЕ УДАЛЯТЬ!!!!!
}
