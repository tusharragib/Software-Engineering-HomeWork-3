#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H


enum scale {ounces, kilograms};

class ZooAnimal
{
    private:
        char *name[100];
        int cageNumber;
        int weightDate;
        int weight;
        ZooAnimal *mother;
    public:
        void create(const char* AnimalName, int CageNum, int WtDate, int Wt);
        void Destroy ();
        void changeWeight (int pounds);

                                                                             //{
        inline void changeWeightDate (int today)                             // Ex-2.2: Modified prototype for changeWeightDate to make it an inline function.
        {
            weightDate = today;                                              // Setting the data member "weightDate" equal to the parameter "today".
        }                                                                    //}

        char* reptName ();
        int reptWeight ();
        void reptWeight (scale which);
        int daysSinceLastWeighed (int today);


                                                                             //{
        inline int reptWeightDate()                                          // Ex-2.1: inline member function reptWeightDate
        {                                                                    // to return the weightDate data.
            return weightDate;                                               //}
        }


        void isMotherOf (ZooAnimal&);                                        // Ex-2.3: ZooAnimal member function isMotherOf()
};

#endif // ZOOANIMAL_H
