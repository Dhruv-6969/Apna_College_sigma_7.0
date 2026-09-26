# Ask the user for: Principal (P), Rate (R), Time (T). Convert all to float and compute simple interest:

p = float(input("Enter the principle amount: "))
r = float(input("Enter the rate of interest: "))
t = float(input("Enter the time in years: "))

si = (p * r * t)/100

print(si)