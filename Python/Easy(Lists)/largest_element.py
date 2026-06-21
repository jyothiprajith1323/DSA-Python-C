a =[]
n = int(input())

for _ in range(n):
    a.append(int(input()))

max_value = a[0]

for value in a[1:]:
    if value > max_value:
        max_value = value

print(f"The max value is {max_value}")