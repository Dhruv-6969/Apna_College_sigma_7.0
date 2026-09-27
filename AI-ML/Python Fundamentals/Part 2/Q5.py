# Write a function to return the sum of digits of a number, n

def sum_of_digits(n):
    sum = 0
    i = int(n)

    while(i>0):
        sum += int(i%10)
        i = i / 10

    print(sum)

n = int(input("Enter an integer: "))
sum_of_digits(n)