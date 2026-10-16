# Input two lists of integers from the user. Merge them into one list and sort the result.

size1 = int(input("Enter the size of list 1: "))
size2 = int(input("Enter the size of list 2: "))

list1 = []
list2 = []

for i in range(size1):
    list1.append(int(input(f"Enter the integer for {i}th index: ")))

for i in range(size2):
    list2.append(int(input(f"Enter the integer for {i}th index: ")))

merged_list = list1 + list2

output = sorted(merged_list)

print(output)