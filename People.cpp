//
// Created by omega on 26/10/2022.
//

#include "People.h"
#include "Place.h"
/**
 * La función anterior es un constructor de la clase People.
 *
 * Args:
 *   name (string): el nombre de la persona
 *   id (int): La identificación de la persona.
 *   current (Place): La ubicación actual de la persona.
 *   destination (Place): El destino de la persona.
 */
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
//NO PROBADO

/**
 * Esta función crea un nuevo objeto Personas y lo agrega a la lista de personas
 *
 * Args:
 *   name (string): el nombre de la persona
 *   id (int): la identificación de la gente
 *   current (Place): el lugar actual de la gente
 *   des (Place): el destino de la gente
 *   plist (People): la lista de personas
 *
 * Returns:
 *   La lista.
 */
People*People::addPeople(string name,int id,Place*current,Place*des,People*plist){
    People*newPeople = new People(name,id,current,des);
    newPeople->next = plist;
    plist = newPeople;
    return plist;

}
//NO PROBADO


/**
 * Busca una persona en la lista de personas.
 *
 * Args:
 *   id (int): la identificación de las personas que desea buscar
 *   pList (People): La lista de personas para buscar.
 *
 * Returns:
 *   Un puntero a un objeto Personas.
 */
People*People::searchPeople(int id,People*pList){
    if(pList == NULL){
         return NULL;
    }
    People*peopleTemp = pList;
    while(peopleTemp != NULL){
        if(peopleTemp->getId() == id){
            return peopleTemp;
        }
    }
    return NULL;
}
//NO PROBADO
/**
 * Modifica la información de una persona
 *
 * Args:
 *   oldId (int): El id de la persona que quieres modificar.
 *   newName (string): El nuevo nombre de la persona.
 *   newId (int): La nueva identificación de la persona.
 *   current (Place): es la ubicación actual de la persona
 *   des (Place): es el destino de la persona
 *   pList (People): es la lista de personas
 *
 * Returns:
 *   la lista de personas
 */
People*People::modPeople(int oldId,string newName,int newId,Place*current,Place*des,People*pList){
    People*people = people->searchPeople(oldId,pList);
    if(people == NULL){
        cout<<"\nLA PERSONA NO SE ENCUENTRA REGISTRADA "<<endl;
    }
    else{
        people->setName(newName);
        people->setId(newId);
        people->setCurrentLocation(current);
        people->setPlaceDestination(des);
        return pList;

    }
}

//NO PROBADO
/**
 * Busca a una persona con la identificación dada, y si la encuentra, la elimina de la lista
 *
 * Args:
 *   oldId (int): La identificación de la persona que desea eliminar.
 *   pList (People): La lista de personas.
 *
 * Returns:
 *   la lista de personas
 */
People*People::deletePeople(int oldId,People*pList){
    People*people = people->searchPeople(oldId,pList);
    if (people == NULL){
        cout<<"\nLA PERSONA NO EXISTE";
    }
    else{
        if (pList->getId() == oldId){
            pList = pList->next;
        }
        else{
            People*temp = pList;
            People*ant = NULL;
            while((temp!=NULL)&&(temp->getId()!=oldId)){
                ant = temp;
                temp = temp->next;
            }
            if(temp ==NULL){
                cout<<"\nLA PERSONA NO EXISTE";

            }else{
                ant->next = temp->next;
            }
        }
    }
    return pList;
}
/**
 * Esta función imprime la lista de personas
 *
 * Args:
 *   pList (People): es la lista de personas
 */
void People::printPeopleList(People*pList){
    if (pList == NULL){
        cout<<"LA LISTA DE PERSONAS ESTA VACIA";
    }
    else{
        People*temp = pList;
        while(temp !=NULL){
            cout<<temp->getName()<<endl;
            cout<<temp->getId()<<endl;
            cout<<temp->getCurrentLocation()->getNamePlace()<<endl;
            cout<<temp->getPlaceDestination()->getNamePlace()<<endl;
            temp = temp->next;
        }
    }


}
People*People::dataLoad(People*pList,Place*placeList){

    pList = pList->addPeople("Karina",1,placeList->searchPlace("SantaClara",placeList),placeList->searchPlace("CQ",placeList),pList);
    pList = pList->addPeople("Leiner",2,placeList->searchPlace("CQ",placeList),placeList->searchPlace("SantaClara",placeList),pList);

    return pList;




}


