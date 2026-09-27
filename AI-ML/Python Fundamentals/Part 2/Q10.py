# Letʼs create a “Number Guessing Game”. Given a secret number (already decided by you), write a program that asks the user to guess it and prints:
# • "Too high" if the guess is above the number
# • "Too low" if the guess is below
# • "Correct!" if the guess matches

while(1):
    n = int(input("Guess the number: "))
    
    if(n>78):
        print("Too high") 
    elif(n<78):
        print("Too low") 
    elif(n == 78):
        print("Correct!")
        break
    else:
        print("Wrong Input")