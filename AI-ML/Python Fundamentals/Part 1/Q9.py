# Take a decimal number as input (like 45.78) and output its: integer part = 45, fractional part = 0.78

num = float(input("Enter a decimal number: "))

inum = print(f"Integer Part = {int(num)}\nFractional Part = {num%1}")