//
// Created by Karina on 2/11/2022.
//

#include "Place.h"
#include "Edge.h"
#include "People.h"
using namespace std;


int main(){
    People*peopleList;
    Place*placeList;
    Edge* pEdge;

    placeList->dataLoad(placeList);
    pEdge->dataload();


    pEdge->searchEdge(placeList->searchPlace("CQ", placeList), "Fortuna");
    pEdge->printEdge(placeList->searchPlace("Fortuna", placeList), "CQ", "");

    peopleList->printPeopleList(peopleList);





    return 0;

}