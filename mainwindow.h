#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QWidget>
#include <QLabel>
#include <QObject>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void envoyerATous(const QString &message);
    

private slots:
    void nouvelleConnexion();
    void donneesRecues();
    void deconnexionClient();

private:
    Ui::MainWindow *ui;
    /* Serveur */
    QTcpServer *serveur;
    QList<QTcpSocket *> clients;
    quint16 tailleMessage;
};

#endif // MAINWINDOW_H
