//
// Created by Karina on 2/11/2022.
//


//Arco

#include "Edge.h"
//#include "Place.h"
#include <iostream>
using namespace std;


/**
 * Esta función es un constructor de la clase Edge. Toma una distancia y un destino y establece la distancia y el destino
 * en los valores pasados. También establece nextEdge en nullptr
 *
 * Args:
 *   dis (int): La distancia entre el vértice actual y el vértice de destino.
 *   des (string): El destino del borde.
 */
Edge::Edge(int dis, string des) {
    this->distance = dis;
    this->destination = des;
    this->nextEdge = nullptr;
}

/**
 * * Crea un nuevo arco entre el vertice origen y el vertice destino
 *
 * Args:
 *   origin (string): El nombre del lugar de origen.
 *   dis (int): distancia entre el origen y el destino
 *   des (string): destino
 *
 * Returns:
 *   un puntero al lugar donde se agregó el borde.
 */
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

bool existPath = false;




/**
 * Función recursiva que busca un camino entre dos lugares.
 *
 * Args:
 *   graph (Place): El gráfico a buscar.
 *   des (string): el lugar de destino
 *
 * Returns:
 *   un valor booleano.
 */
bool Edge::searchEdge(Place * graph, string des) {

    if((graph == NULL) or (graph->visited == true))
        return existPath;

    if(graph->getNamePlace() == des) {
        existPath= true;
        return existPath;
    }
    graph->visited =true;
    Edge * tempE = graph->sublistEdge;
    while(tempE != NULL){
        searchPlace(searchPlace(tempE->destination), des);
        tempE = tempE->nextEdge;
    }
}

bool Edge::printEdge(Place* graph,string des, string path){
    if((graph == NULL) or graph->visited)
        return existPath;

    if(graph->getNamePlace() == des){
        cout<<"\n\nRuta................  "<<path<<des;
        existPath= true;
        return existPath;
    }
    graph->visited =true;

    Edge * tempE = graph->sublistEdge;

    while(tempE != NULL){
        printEdge(searchPlace(tempE->destination), des,path+graph->getNamePlace());
        tempE = tempE->nextEdge;
    }
    graph->visited =false;
}


//graph es una lista de lugares(vertices)
/**
 * Establecen los vertices y las rutas para crear al gráfico.
 *
 * Args:
 *   graph (Place): El gráfico al que desea agregar el borde.
 *
 * Returns:
 *   La gráfica
 */
Place* Edge::dataload(Place* graph) {
    graph = addEdge("CQ",12,"Florencia");
    graph = addEdge("Florencia",12,"CQ");
    graph = addEdge("Florencia",6,"SantaClara");
    graph = addEdge("SantaClara",6,"Florencia");

    return graph;
}
