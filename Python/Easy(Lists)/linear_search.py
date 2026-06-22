a = []
n = int(input())
key = int(input())
for _ in range(n):
    a.append(int(input()))

def linear_search(a,n,key):
    for i in range(n):
        if a[i] == key:
            return 0
    return -1

val = linear_search(a,n,key)

if val == 0 :
    print("Element is found")
else :
    print("Element is not found")
