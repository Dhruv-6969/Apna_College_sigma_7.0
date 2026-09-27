# Write a function that prints the digits of a number, n. For eg: n = 312, there are 3 digits in it 3, 1 and 2 & we need to print them.

def print_digits(n):
    i = int(n)

    while(i>0):
        print(i % 10)
        i = int(i / 10)

n = int(input("Enter an integer: "))
print_digits(n)