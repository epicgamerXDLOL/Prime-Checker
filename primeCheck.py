import math #imported it so i can floor the input to a whole number
def primeCheck(num:int): # defining the function
    if num >= 2 and num % 1 == 0:
        isPrime = True
        for x in range(2, math.floor(num)): #Looping from 2 to the number/2 because anything greater than number/2 can't be divisible by it
            if num % x == 0:
                isPrime = False
    else:
        raise Exception("Your number should be greater than or equal to 2 and a whole number.")
    return isPrime