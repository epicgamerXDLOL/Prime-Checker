using System;

namespace primeChecker
{
    class Program
    {
        
        public static bool primeChecker(int num)
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
                isPrime = false;
            return isPrime;
        }
    }
}
