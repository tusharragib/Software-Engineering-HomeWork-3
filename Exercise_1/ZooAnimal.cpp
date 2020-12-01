#include<iostream>
#include<string.h>
#include<string>
#include "ZooAnimal.h"
                                                                                 //{
void ZooAnimal::create(const char* AnimalName, int CageNum, int WtDate, int Wt)  // Ex-1.1: The definition of create() function.
        {
            strcpy(*name,AnimalName);                                            // Taking a character string.
            cageNumber = CageNum;
            weightDate = WtDate;                                                 // Taking three integer value.
            weight = Wt;                                                         //}
        }
                                                                                 //{
char* ZooAnimal::reptName ()                                                     // Ex-1.3: Public member function definition which
   {                                                                             // returns the animals names from the private data.
    return *name;                                                                //}
   }

void ZooAnimal::Destroy ()
   {
    delete [] name;
   }
                                                                                 //{
int ZooAnimal::daysSinceLastWeighed (int today)                                  // Ex-1.2: Function header for daysSinceLastWeighed()
                                                                                 // Has a single integer parameter "today".
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);                                                   // returns an integer number of days since the animal was last weighed.
                                                                                 //}
}
