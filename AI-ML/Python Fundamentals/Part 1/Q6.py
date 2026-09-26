# Ask the user for a temperature in Celsius (string input). Convert it to float, then calculate and print temperature in Fahrenheit.

temp = input("Enter the temperature in Celsius: ")

faren_temp = (float(temp) * (9/5)) + 32

print(faren_temp)