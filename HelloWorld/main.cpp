#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Hellow World!.";
    qInfo() << "This is Console Application.";
	qInfo() << "Qt Creator.";
    return a.exec();
}
