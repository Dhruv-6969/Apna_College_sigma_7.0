# The user enters a string containing a number (e.g., "45"). Convert it to: an integer, a float, a string again. Print all three values with their types.

s = input("Enter a String containing number only: ")

a = int(s)
print(a, type(a))

b = float(a)
print(b, type(b))

c = str(b)
print(c, type(c))