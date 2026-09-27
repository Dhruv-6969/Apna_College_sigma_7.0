# Design a program to continuously input a number n from user & print if it is positive or negative until the user enters “Quit”.

n = input("Enter an integer or enter 'Quit' to quit: ")

while(n != 'Quit'):
    if(int(n) > 0):
        print("Positive")
    elif(int(n) < 0):
        print("Negative")
    else:
        print("Neither Positive nor Negative")
        
    n = input("Enter an integer or enter 'Quit' to quit: ")

print("Thank You!")