str = input()
vowels = 0
consonants = 0

str_lower = str.lower()

for i in range(len(str)):
    if str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u':
        vowels += 1
    else:
        consonants += 1

print(f"The no of vowels = {vowels}")
print(f"The no of consonants = {consonants}")