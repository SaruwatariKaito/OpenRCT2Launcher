#include "mainwindow.h"
#include <QApplication>

#ifndef Q_PROCESSOR_X86
#error Needs x86 to run OpenRCT2
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("OpenRCT2");
    QCoreApplication::setOrganizationDomain("OpenRCT2.org");
    QCoreApplication::setApplicationName("OpenRCT2Launcher");

    MainWindow w;
    w.show();

    return a.exec();
}