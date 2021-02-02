#include <iostream>
#include <stdexcept>
bool primeChecker(int num)
{
    bool isPrime = true;
    if (num >= 2 && num % 1 == 0)
    {

        
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        }
    }
    else
        throw std::runtime_error("Your number should be greater than or equal to 2 and a whole number.");
    return isPrime;
}