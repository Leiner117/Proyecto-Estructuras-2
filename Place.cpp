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
        if(tempP->nombre == origen)
            return tempP;

        tempP= tempP->

    }


    return NULL;
}
Place*Place::addPlace()






