# Given a list of integers compute the average of all numbers in the list.

list1 = [1, 2, 3, 4]
sum = 0

for i in list1:
    sum += i

avg = sum / len(list1)

print(avg)