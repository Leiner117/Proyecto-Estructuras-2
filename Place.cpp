//
// Created by omega on 26/10/2022.
//

#include "People.h"
#include "Place.h"
using namespace std;

//Constructor
Place::Place(string namePlace) {
    this->namePlace=namePlace;
}
void Place::setNamePlace(string namePlace) {
    this->namePlace=namePlace;
}
string Place::getNamePlace() {
    return this->namePlace;
}

Place *Place::searchPlace(string origin, Place* graph) {
    Place* tempP = graph;
    while(tempP != NULL){
        if(tempP->namePlace == origin)
            return tempP;
        tempP = tempP->nextPlace;
    }
    return NULL;
}
Place*Place::addPlace(string namePlace,Place*pList){
    Place* newPlace= new Place(namePlace);
    newPlace->nextPlace= pList;
    pList = newPlace;
    return pList;
}
Place*dataLoad(Place*pList){

    pList = pList->addPlace("SantaClara",pList);
    pList = pList->addPlace("CQ",pList);
    pList = pList->addPlace("Florencia",pList);
    pList = pList->addPlace("Muelle",pList);
    pList = pList->addPlace("Platanar",pList);
    pList = pList->addPlace("Tanque",pList);
    pList = pList->addPlace("Fortuna",pList);
    return pList;
}




