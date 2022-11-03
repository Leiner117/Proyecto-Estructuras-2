//
// Created by Karina on 2/11/2022.
//

#include "Edge.h"

#include <iostream>
using namespace std;
#include "Vertex.h"

Edge::Edge(int dis, string des) {
    this->distance = dis;
    this->destination = des;
    this->nextEdge = nullptr;
}

void Edge::addEdge(string origin,int dis,string des){
    Vertex* vOrigin = searchVertex(origin);
    Vertex* vDestination = searchVertex(des);

    if(vOrigin == nullptr){
        cout<<"NO SE HA ENCONTRO EL ORIGEN";
        return;
    }
    if(vDestination == nullptr ) {
        cout<<"NO SE HA ENCONTRO EL DESTINO";
        return;
    }

    Edge* newEdge = new Edge(dis,des);

    newEdge->nextEdge = vOrigin->sublistEdge;
    vOrigin->sublistEdge = newEdge;
}

Edge* Edge::dataload(Edge* graph) {

    graph = addEdge("CQ",12,"Florencia");
    graph = addEdge("Florencia",12,"CQ");

    graph = addEdge("Florencia",6,"SantaClara");
    graph = addEdge("SantaClara",6,"Florencia");

    return edgeList;
}
