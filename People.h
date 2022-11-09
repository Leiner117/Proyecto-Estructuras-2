//
// Created by omega on 26/10/2022.
//
#ifndef PROYECTO_ESTRUCTURAS_2_PEOPLE_H
#define PROYECTO_ESTRUCTURAS_2_PEOPLE_H
#include <string>
#include "Place.h"


using namespace std;

class People
{
    public:
        People(string,int,Place*,Place*);
        string getName();
        void setName(string name);
        int getId();
        void setId(int id);
        Place*getCurrentLocation();
        void setCurrentLocation(Place*);
        Place*getPlaceDestination();
        void setPlaceDestination(Place*);
        People*addPeople(string,int,Place*,Place*,People*);
        People*searchPeople(int,People*);
        People*modPeople(int,string,int,Place*,Place*,People*);
        People*deletePeople(int oldId,People*);
        void printPeopleList(People*);
        People*dataLoad(People*,place*);
        People*next;

private:
        string name;
        int id;
        Place*currentLocation;
        People*friendsList;
        Place*placeDestination;




};
#endif //PROYECTO_ESTRUCTURAS_2_PEOPLE_H
