a = []
n = int(input())
zero = 0
zeros = []

for _ in range(n):
    a.append(int(input()))

for i in range(n):
    if a[i] != 0 :
        zeros.append(a[i])
    else:
        zero += 1

for _ in range(zero):
    zeros.append(0)

print(a)
print(zeros)