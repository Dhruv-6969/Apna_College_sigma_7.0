# Ask the user for a string and check whether it is a palindrome or not.

str = input("Enter a string: ")

def check_palindrome(str):
    left = 0
    right = len(str) - 1
    while(left<right):
        if(str[left] != str[right]):
            return False
        left += 1
        right -= 1
    return True

print(check_palindrome(str))