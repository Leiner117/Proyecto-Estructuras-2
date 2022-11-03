//
// Created by omega on 26/10/2022.
//
#include "People.h"
#ifndef PROYECTO_ESTRUCTURAS_2_PLACE_H
#define PROYECTO_ESTRUCTURAS_2_PLACE_H


using namespace std;

class Place
{
    public:
        Place(string);
        void setNamePlace(string namePlace);
        string getNamePlace();
        void setPeopleList(People*);
        People* getPeopleList();



    private:
        string namePlace;
        People* peopleList;

};
#endif //PROYECTO_ESTRUCTURAS_2_PLACE_H