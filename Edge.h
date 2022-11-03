//
// Created by Karina on 2/11/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_2_EDGE_H
#define PROYECTO_ESTRUCTURAS_2_EDGE_H
#include <iostream>
using namespace std;

class Edge {
public:
    int distance;
    string destination;
    Edge* nextEdge;
    Edge(int, string);

    Edge* dataload(Edge*);

};


#endif //PROYECTO_ESTRUCTURAS_2_EDGE_H
