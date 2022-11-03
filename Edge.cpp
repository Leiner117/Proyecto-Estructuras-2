//
// Created by Karina on 2/11/2022.
//

#include "Edge.h"
//#include "Place.h"
#include <iostream>
using namespace std;


Edge::Edge(int dis, string des) {
    this->distance = dis;
    this->destination = des;
    this->nextEdge = nullptr;
}

Place* Edge::addEdge(string origin,int dis,string des){

    Place* vOrigin = vOrigin->searchPlace(origin);
    Place* vDestination = vOrigin->searchPlace(des);

    if(vOrigin == NULL){
        cout<<"NO SE HA ENCONTRO EL ORIGEN";
        return NULL;
    }
    if(vDestination == NULL ) {
        cout<<"NO SE HA ENCONTRO EL DESTINO";
        return NULL;
    }

    Edge* newEdge = new Edge(dis,des);

    newEdge->nextEdge = vOrigin->sublistEdge;
    vOrigin->sublistEdge = newEdge;

    return vOrigin;

}

//graph es una lista de lugares(vertices)
Place* Edge::dataload(Place* graph) {
    graph = addEdge("CQ",12,"Florencia");
    graph = addEdge("Florencia",12,"CQ");
    graph = addEdge("Florencia",6,"SantaClara");
    graph = addEdge("SantaClara",6,"Florencia");

    return graph;
}
