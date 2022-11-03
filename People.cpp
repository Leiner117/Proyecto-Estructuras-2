//
// Created by omega on 26/10/2022.
//

#include "People.h"
#include "Place.h"
People::People(string name, int id,Place*current,Place*destination) {
    this->name = name;
    this->id = id;
    this->currentLocation = current;
    this->placeDestination = destination;
    this->next = NULL;
}
string People::getName(){
    return this->name;
}
void People::setName(string name) {
     this->name = name;
}

int People::getId(){
    return id;
}

void People::setId(int id) {
    this->id = id;
}
Place*People::getCurrentLocation(){
    return this->currentLocation;
}
void People::setCurrentLocation(Place*current) {
    this->currentLocation = current;
}
Place*People::getPlaceDestination() {
    return this->placeDestination;
}
void People::setPlaceDestination(Place*destination){
    this->placeDestination = destination;
}
People*People::addPeople(string name,int id,Place*current,Place*des){
    People newPeople = People(name,id,current,des);
    newPeople =
}


