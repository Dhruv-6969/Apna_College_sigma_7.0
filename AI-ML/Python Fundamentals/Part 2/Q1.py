# Write a program that takes salary as input. Using conditional statements, calculate the final tax rate based on these rules:
# • If salary < 30,000 → 5%
# • If salary is 30,000–70,000 → 15%
# • If salary > 70,000 → 25%

sal = float(input("Enter your salary: "))

if(sal < 30000):
    final_tax = sal * (5/100)
elif(sal <= 30000 or sal >= 70000):
    final_tax = sal * (15/100)
else:
    final_tax = sal * (25/100)

print(f"Salary: {final_tax}")