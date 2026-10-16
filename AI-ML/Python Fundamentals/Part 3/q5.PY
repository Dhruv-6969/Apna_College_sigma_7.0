# Create a dictionary where:
# • Keys = student names
# • Values = marks (integer)
# Write a menu-based program where user presses a key (ʼAʼ, ‘Bʼ, ‘Cʼ, ‘Dʼ) depending on the operation they want to perform on the dictionary:
# 1. A - Add a student
# 2. B - Update marks
# 3. C - Search for a student
# 4. D - Display all students and marks

d = {}

def add(k, v):
    d.update({k : v})

def update(k, v):
    d.update({k : v})

def search(k):
    print(d.get(k))

def display():
    print(d.items())

while True:
    s = input("Enter\nA - Add a student\nB - Update marks\nC - Search for a student\nD - Display all students and marks\nquit - To STOP\n")
    match s:
        case "A":
            k = input("Enter the name of the student you want to add: ")
            v = int(input("Enter the marks of the student you want to add: "))
            add(k, v)
        case "B":
            k = input("Enter the name of the student you want to update: ")
            v = int(input("Enter the marks of the student you want to update: "))
            update(k, v)
        case "C":
            k = input("Enter the name of the student you want to search: ")
            search(k)
        case "D":
            display()
        case "quit":
            print("Thank You!")
            break
        case _:
            print("Wrong Input")