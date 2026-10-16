#Write a program that takes a string from the user and prints the number of spaces in the string.

str = input("Enter the string: ")

count = 0

for s in str:
    if(s == " "):
        count += 1

print(f"Number of spaces = {count}")