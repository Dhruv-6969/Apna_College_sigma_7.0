# Write a function is_prime(n) that returns True if n is a prime number and False otherwise, using a loop.

def is_prime(n):
    for i in range(2, int(n/2)):
        if(n%i == 0):
            return False
    return True

n = int(input("Enter an integer: "))
if(is_prime(n) == True):
    print("True")
else:
    print("False")