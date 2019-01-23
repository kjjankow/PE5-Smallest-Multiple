/*******************************
 Project Euler 5 - Smallest Mulitple
 
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*******************************/

#include <iostream>

using namespace std;

int main()
{
    long int smallCheck = 0;                // Allows long ints in multiples
    int inc = 10;                         // Since it has to be divisible by 20, has to be a multiple of 10
    
    for(int i=11; i<65000; i++)           // A guess on maximum needed. Keeps loop integers regular ints
    {
        for(int j=65000; j>i; j-=inc)
        {
            long int num = i*j;
            int divisor = 21;
            do{
                divisor--;
                if(num % divisor != 0)
                    break;
                if(divisor-1 == 0)
                {
                    if (smallCheck == 0)
                    {
                        smallCheck = num;           // Initial assignment if checks are passed
                    }
                    else if(num < smallCheck){
                        smallCheck = num;           // Later assignment if checks are passed
                    }
                }
            } while (divisor > 1);
        }
    }
    
    cout << "The smallest number that can be divided in the range 1-20 is: " << smallCheck << endl;

    return 0;
}
