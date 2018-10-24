#ifndef PRIMENUM_H_INCLUDED
#define PRIMENUM_H_INCLUDED
#include <iostream>

using namespace std;

//function
void primeCalc (int num)
{
    float calculate;
    int count = 0;
    int i;
       for (i=1; i<=num; i++){
            calculate = num % i;
            if (calculate == 0){
                count ++;
            }
        }

        if (count > 2)
            {
            cout << num <<" is not prime.\n";
            }
            else
            {
                cout << num << " is prime.\n";
            }

}



#endif // PRIMENUM_H_INCLUDED
