// homework7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "mylib.h"

#define compare(x, xmax) (x>=0 && x < xmax)?true:false
#define getMassSize(size) (std::cin >> size)


int main()
{
    // task 1 and 5
    {
        const size_t massiveSize = 10;
        float massive[massiveSize] = { 0 };

        const size_t inMassiveSize = 2;
        int inMassive[inMassiveSize] = { 0 };

        PosNegNumber myMass = { 0,0 };

        libMass::massiveInitial(massive, massiveSize);
        libMass::printMassive(massive, massiveSize);
        libMass::posNegValue(massive, massiveSize, inMassive);
        libMass::printPosNegNumber(inMassive, inMassiveSize);

        libStruct::posNegValue(massive, massiveSize, myMass);
        libStruct::printPosNegNumber(myMass);
    }

    // task 2
    {
        int x = getNumber("Enter a number: ");
        int xmax = getNumber("Enter upper value: ");
        bool res = compare(x, xmax);
        std::cout << "Result: " << res << std::endl;
    }

    // task 3
    {
        size_t massSize;
        std::cout << "Enter number of elements: ";
        getMassSize(massSize);
        int* massive = new (std::nothrow) int[massSize];

        getMassive(massive, massSize);
        sort(massive, massSize);
        printMassive(massive, massSize);

        delete[] massive;
        massive = nullptr;
    }

}



/*    // task 4
    {
        Worker1* worker11 = new Worker1;
        Worker2* worker12 = new Worker2;

        worker11->name = "Anna";
        worker11->sername = "Kulick";
        worker11->age = 32;
        worker11->experience = 15;

        worker12->name = "Anna";
        worker12->sername = "Kulick";
        worker12->age = 32;
        worker12->experience = 15;

        pCompany->director = { 125093, 45, 350'000.0 };
        pCompany->size = CS_MIDDLE;
        pCompany->PeopleNumber = 215;
        pCompany->people[0] = pCompany->director;
        pCompany->people[1] = { 134578, 34, 60'000.0 };

        delete worker11;
        delete worker12;
        return 0;

    }*/