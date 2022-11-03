//
// Created by omega on 26/10/2022.
//

//Estructura del vertice

#ifndef PROYECTO_ESTRUCTURAS_2_PLACE_H
#define PROYECTO_ESTRUCTURAS_2_PLACE_H
#include "People.h"
#include "Edge.h"
using namespace std;

class Place
{
    public:

        Place(string);
        void setNamePlace(string namePlace);
        string getNamePlace();
        Place* dataLoad(Place* );
        Place*searchPlace(string, Place*);
        Place*addPlace(string);
        class Edge* sublistEdge; // sublista de arcos


    private:
        string namePlace;
        bool visited;



};
#endif //PROYECTO_ESTRUCTURAS_2_PLACE_H