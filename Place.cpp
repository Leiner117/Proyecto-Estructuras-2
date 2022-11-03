//
// Created by omega on 26/10/2022.
//

#include "People.h"
#include "Place.h"
using namespace std;

//Constructor
Place::Place(string namePlace) {
    this->namePlace=namePlace;
    this->peopleList=NULL;
}
void Place::setNamePlace(string namePlace) {
    this->namePlace=namePlace;
}
string Place::getNamePlace() {
    return this->namePlace;
}

People*Place::setPeopleList(People *peopList) {
    this->peopleList=peopList;
}
People*Place::getPeopleList(People*) {
    return  this->peopleList;
}






