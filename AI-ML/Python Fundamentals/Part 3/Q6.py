# Given a list of words. Create a dictionary that maps each word to its length.

words = ["apple", "banana", "kiwi", "cherry", "mango"]
dict = {}

for word in words:
    dict.update({word : len(word)})

print(dict.items())