/*S M Ragib Shahriar Islam
Medical Imaging and Applications

Excercise-2:
*/

#include<iostream>
#include<string.h>
#include<string>
#include "ZooAnimal.h"

int main()
{
    ZooAnimal bozo;
    bozo.create("Bozo", 408, 1027, 400);
    std::cout<<"This animal name is "<<bozo.reptName()<<std::endl;
    std::cout<<"The animal, '"<<bozo.reptName()<<"' last weighted "<<bozo.daysSinceLastWeighed(1130)<<" days ago."<<std::endl;
    std::cout<<"The last Weight Date is " << bozo.reptWeightDate() << std::endl;

    ZooAnimal cub;
    cub.isMotherOf(cub);

    return 0;
}
