# Given a tuple of integers, create:
# • A tuple of all even numbers
# • A tuple of all odd numbers

tup = (1, 2, 3, 4, 5, 6, 7, 8)

even_list = []
odd_list = []

for i in tup:
    if(i % 2 == 0):
        even_list.append(i)
    else:
        odd_list.append(i)

even_tup = tuple(even_list)
odd_tup = tuple(odd_list)

print(even_tup, type(even_tup))
print(odd_tup, type(odd_tup))