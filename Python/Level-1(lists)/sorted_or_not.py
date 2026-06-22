a = []
n = int(input())
for _ in range(n):
    a.append(int(input()))

sorted = 0
for i in range(n):
    if(a[i-1]<a[i]):
        sorted += 1
        print(sorted)

if(sorted != n-1):
    print("Not Sorted")
else:
    print("Sorted")