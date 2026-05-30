#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QChar>
#include <QRect>
#include <QTime>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "What's up AD!";
    qDebug() << "Date: " << QDate::currentDate();
    qDebug() << "Types: " << QString("String") << QChar('x');
    qDebug() << "Time: " << QTime::fromString("1.30", "m.s");


    return QCoreApplication::exec();
}
