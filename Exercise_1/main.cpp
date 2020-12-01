/*S M Ragib Shahriar Islam
Medical Imaging and Applications

Exercise_1
*/

#include<iostream>
#include<string.h>
#include<string>
#include "ZooAnimal.h"

int main()
{
    ZooAnimal bozo;
    bozo.create("Bozo", 408, 1027, 400);
    std::cout<<"This animal name is "<<bozo.reptName()<<std::endl;                                                               // Ex-1.3: "cout" statement to print the animal's name.
    std::cout<<"The animal, '"<<bozo.reptName()<<"' last weighted "<<bozo.daysSinceLastWeighed(1130)<<" days ago."<<std::endl;

    return 0;
}
