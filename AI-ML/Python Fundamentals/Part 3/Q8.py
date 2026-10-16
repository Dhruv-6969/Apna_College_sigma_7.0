# Write a program to check whether two lists share no common elements

list1 = []
list2 = []

n = int(input("Enter the number of elements in list 1: "))

for i in range(0, n):
    list1.append(int(input(f"Enter the {i} position element for list 1: ")))

m = int(input("Enter the number of elements in list 2: "))

for i in range(0, m):
    list2.append(int(input(f"Enter the {i} position element for list 2: ")))

s1 = set()
s2 = set()

for l in list1:
    s1.add(l)

for l in list2:
    s2.add(l)

if len(s1.intersection(s2)) == 0:
    print("No common elements")
else:
    print("Common Elements")