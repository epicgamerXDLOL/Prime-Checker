package com.company;

public class primeCheck{

    public static boolean primeChecker(int num)

    {
        boolean isPrime = true;
        if (num >= 2 && num % 1 == 0) {
            for (int x = 2; x < num/2; x++) {
                if (num % x == 0)
                    isPrime = false;
            }
        }
        else
            isPrime = false;
        return isPrime;
    }

}
