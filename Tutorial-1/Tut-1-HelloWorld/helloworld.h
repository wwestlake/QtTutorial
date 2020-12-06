#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QObject>

class HelloWorld : public QObject
{
    Q_OBJECT
public:
    explicit HelloWorld(QObject *parent = nullptr);

signals:
    void hello_message(QString message);

public slots:
    void new_message();

private:

    int _state = 0;


};

#endif // HELLOWORLD_H
