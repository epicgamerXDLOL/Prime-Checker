function primeCheck(num) //defining the function
{   if (num >= 2 && num % 1 === 0)
    {
        var isPrime = true;
        for(var i; i < num/2; i++)//looping through the numbers
        {
            if(num % i === 0)
            {
                isPrime = false;
            }
        }
    }
    else
        throw "Your number should be greater than or equal to 2 and a whole number.";    
    return isPrime;
}
