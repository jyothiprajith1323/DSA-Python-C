a = []
no_duplicates = []
n = int(input())

for _ in range(n):
    a.append(int(input()))

for value in a:
    if value not in no_duplicates:
        no_duplicates.append(value)

print(no_duplicates)