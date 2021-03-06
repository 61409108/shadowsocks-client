//
// Created by pikachu on 17-7-27.
//

#ifndef SHADOWSOCKS_CLIENT_GFWLISTTOPACUTIL_H
#define SHADOWSOCKS_CLIENT_GFWLISTTOPACUTIL_H

#include <QObject>
#include <QtCore/QSet>

class GfwlistToPacUtil : public QObject {
Q_OBJECT
public:
    void gfwlist2pac();
signals:

    void finished();

private:
    QSet<QString> set;

    QSet<QString> parseGfwlist(QByteArray byteArray);

    QString getHostname(QString urlString);

    void addDomainToSet(QSet<QString> &set, QString something);

    QString generatePac(QString domains, QString proxy);

};


#endif //SHADOWSOCKS_CLIENT_GFWLISTTOPACUTIL_H
