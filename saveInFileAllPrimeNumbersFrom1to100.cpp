#include <iostream>
#include "primenum.h"
#include "primenumprototype.h"
#include <fstream>


using namespace std;
bool primeCalc (int num)
{
    bool status
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
            status = false;
            }
            else
            {
                cout << num << " is prime.\n";
                status = true;
            }
    return status;
}

void primesaveInFile()
{
    int num;
    ofstream outFile;
    outFile.open("C:\\temp\\100_primeNums.txt");

    for (int num = 1; num < 100; num ++)
    {
        primeCalc(num);
        if (status == true)
            outputFile << num;
    }
    outputFile.close();
}
