#include<iostream>
#include<string.h>
#include<string>
#include "ZooAnimal.h"

void ZooAnimal::create(const char* AnimalName, int CageNum, int WtDate, int Wt)
{
            strcpy(*name,AnimalName);
            cageNumber = CageNum;
            weightDate = WtDate;
            weight = Wt;
}

char* ZooAnimal::reptName ()
   {
    return *name;
   }

void ZooAnimal::Destroy ()
   {
    delete [] name;
   }

int ZooAnimal::daysSinceLastWeighed (int today)

{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
}
                                                                     //{
void ZooAnimal::isMotherOf(ZooAnimal &cub)                           // Ex-2.3: ZooAnimal member function isMotherOf()
{
    cub.mother = this;                                               // Storing mother's data into the object "cub" for which the function was called.
}                                                                    //}
