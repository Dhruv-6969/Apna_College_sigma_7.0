# Ask the user to enter two integers and one float. Convert them all to floats and print their average

a = int(input("Enter an integer: "))
b = int(input("Enter an integer: "))
c = float(input("Enter an float: "))

avg = float((float(a) + float(b) + c)/3)

print(avg)