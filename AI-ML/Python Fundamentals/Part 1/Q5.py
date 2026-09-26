# Write a program to swap values of two numbers entered by the user.

a = int(input("Enter an integer: "))
b = int(input("Enter an integer: "))

temp = a
a = b
b = temp

print(f"After Swap: a = {a} & b = {b}")