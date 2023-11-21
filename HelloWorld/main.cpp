#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Hellow World!.";
    qInfo() << "This is Console Application.";
    return a.exec();
}
