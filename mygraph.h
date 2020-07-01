#ifndef MYGRAPH_H
#define MYGRAPH_H

#include <QObject>

typedef char VerTexType;
typedef int EdgeType;
#define MaxVer 100
#define INFINITY 65535

typedef struct{
    VerTexType ver[MaxVer];
    EdgeType arc[MaxVer][MaxVer];
    int numVerTex,numEdge;

}Mgrah;

class MyGraph : public QObject
{
    Q_OBJECT
public:
    explicit MyGraph(QObject *parent = nullptr);
    void CreateMyGraph(Mgrah *G);
    void BFSTrase(Mgrah *G);

private:



signals:

};

#endif // MYGRAPH_H
