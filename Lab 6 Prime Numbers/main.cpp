#include <iostream>
#include "primenum.h"
#include <fstream>

using namespace std;

//Function Prototype
void primeCalc(int);

int main()
{
    int num;
    ifstream inputFile;
    inputFile.open("100_nums.txt");


   while (inputFile >> num)
   {
     primeCalc(num);
   }
   inputFile.close();

   return 0;
}


