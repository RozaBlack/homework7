#include<iostream>
#pragma once

struct PosNegNumber
{
    int positiveCount;
    int negativeCount;
};

/*
struct Worker1
{
    char name[255];
    char sername[255];
    int age;
    int experience;
};

#pragma pack(push, 1)
struct Worker2
{
    char name[255];
    char sername[255];
    int age;
    int experience;
};
#pragma pack(pop)
*/

namespace libMass
{
    void massiveInitial(float* massive, size_t massiveSize);
    void printMassive(float* massive, size_t massiveSize);
    void posNegValue(float* massive, size_t massiveSize, int* inMassive);
    void printPosNegNumber(int* inMassive, size_t massiveSize);
}

namespace libStruct
{
    void posNegValue(float* massive, size_t massiveSize, PosNegNumber& inMassive);
    void printPosNegNumber(PosNegNumber& inMassive);
}

int getNumber(std::string);

void getMassive(int* massive, size_t massiveSize);
void sort(int* massive, size_t massiveSize);
void printMassive(int* massive, size_t massiveSize);