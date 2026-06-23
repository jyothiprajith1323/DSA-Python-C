str = input()
def ispalindrome(str):
    return 1 if str == str[::-1] else 0

print(ispalindrome(str))