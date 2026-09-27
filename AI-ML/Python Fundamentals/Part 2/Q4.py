# Write a function to return the count the number of digits in a number, n

def count_digits(n):
    i = int(n)
    count = 0

    while(i>0):
        i = int(i/10)
        count += 1

    print(count)

n = int(input("Enter an integer: "))

count_digits(n)