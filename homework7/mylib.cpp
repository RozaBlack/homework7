#include<iostream>
#include "mylib.h"

#define SwapINT(a, b, c) (a > b) ? (c = a, a = b, b = c) : 0

namespace libMass
{
	void massiveInitial(float* massive, size_t massiveSize)
	{
		for (size_t i = 0; i < massiveSize; i++)
		{
			massive[i] = float(rand() % 1000 - 500) / (float(rand() % 100) + 1.0f) + 7;
		}
	}

	void printMassive(float* massive, size_t massiveSize)
	{
		for (size_t i = 0; i < massiveSize; i++)
		{
			std::cout << massive[i] << " ";
		}
		std::cout << std::endl;
	}

	void printPosNegNumber(int* massive, size_t massiveSize)
	{
		for (size_t i = 0; i < massiveSize; i++)
		{
			std::cout << massive[i] << " ";
		}
		std::cout << std::endl;
	}

	void posNegValue(float* massive, size_t massiveSize, int* inMassive)
	{
		for (size_t i = 0; i < massiveSize; i++)
		{
			if (massive[i] > 0)
			{
				inMassive[0]++;
			}
			else if (massive[i] < 0)
			{
				inMassive[1]++;
			}
		}
	}
}

namespace libStruct
{
	void printPosNegNumber(PosNegNumber& massive)
	{
		std::cout << "Number of positive elements: " << massive.positiveCount << std::endl;
		std::cout << "Number of negative elements: " << massive.negativeCount << std::endl;
	}

	void posNegValue(float* massive, size_t massiveSize, PosNegNumber& inMassive)
	{
		for (size_t i = 0; i < massiveSize; i++)
		{
			if (massive[i] > 0)
			{
				inMassive.positiveCount++;
			}
			else if (massive[i] < 0)
			{
				inMassive.negativeCount++;
			}
		}
	}
}

int getNumber(std::string phraze)
{
	int x = 0;
	std::cout << phraze;
	std::cin >> x;

	return x;
}

void getMassive(int* massive, size_t massiveSize)
{
	std::cout << "Sequentially enter an array of " << massiveSize << " elements:" << std::endl;
	for (size_t i = 0; i < massiveSize; i++)
	{
		std::cin >> massive[i];
	}
}

void sort(int* massive, size_t massiveSize)
{
	int c = 0;
	for (size_t i = 0; i < massiveSize; i++)
	{
		for (size_t j = 0; j < massiveSize - i - 1; j++)
		{
			SwapINT(massive[j], massive[j+1], c);
		}
	}
}

void printMassive(int* massive, size_t massiveSize)
{
	for (size_t i = 0; i < massiveSize; i++)
	{
		std::cout << massive[i] << " ";
	}
	std::cout << std::endl;
}