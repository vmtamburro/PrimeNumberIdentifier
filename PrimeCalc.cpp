#include <iostream>
#include "primenumprototype.h"
#include <fstream>


using namespace std;

bool primeCalc(int num)
{
    bool primeCalc;
    float calculate;
    int count = 0;
    int i;

       for (i=1; i<=num; i++)
        {
            calculate = num % i;
            if (calculate == 0)
            {
                count ++;
            }
        }

        if (count > 2)
            {
            cout << num <<" is not prime.\n";
            primeCalc = false;
            }
            else if (count = 2)
            {
                cout << num << " is prime.\n";
                primeCalc = true;
            }


    return primeCalc;
}






void primesaveInFile()
{
    bool bPrime;

    ofstream outFile;
    outFile.open("C:\\temp\\100_primeNums.txt");

    for (int num = 1; num <= 100; num ++)
    {
        bPrime = primeCalc(num);
        if (bPrime == true)
            outFile << num << endl;
    }
    outFile.close();
}
