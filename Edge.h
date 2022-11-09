//
// Created by Karina on 2/11/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_2_EDGE_H
#define PROYECTO_ESTRUCTURAS_2_EDGE_H
#include <iostream>
#include "Place.h"

using namespace std;

class Edge {
public:
    int distance;
    string destination;
    Edge* nextEdge;
    Edge(int, string);
    Place* addEdge(string,int,string);
    Place* dataload(Place*);
    bool searchEdge(Place*, string);
    bool printEdge(Place* ,string , string );

};


#endif //PROYECTO_ESTRUCTURAS_2_EDGE_H
