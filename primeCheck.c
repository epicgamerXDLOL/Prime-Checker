#include <stdlib.h>
#include <stdexcept>
#include <stdbool.h>

bool primeChecker(int num)
{  
    bool isPrime = true;
    if(num >= 2 && num % 1 == 0)
    {

            for(int i; i < num/2; i++)
            {
                if(num % i == 0)
                {
                    isPrime = false;
                }

            }
    }
    else
        isPrime = false;
    
        
    return isPrime;
}