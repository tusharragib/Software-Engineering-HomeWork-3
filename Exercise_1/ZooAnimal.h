#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H


class ZooAnimal
{
    private:
        char *name[100];
        int cageNumber;
        int weightDate;
        int weight;
    public:
        void create(const char* AnimalName, int CageNum, int WtDate, int Wt); //Ex-1.1: The declaration of create() function with a character string and three integer value input. The return type is void.
        void Destroy ();
        char* reptName ();                                                    //Ex-1.3: Public member function which returns the animal's name.
        int daysSinceLastWeighed (int today);                                 //Ex-1.2: ZooAnimal Class member function daysSinceLastWeighed().
};

#endif // ZOOANIMAL_H
