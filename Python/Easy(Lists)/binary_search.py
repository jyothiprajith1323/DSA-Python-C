a = []
n = int(input())
key = int(input())
for _ in range(n):
    a.append(int(input()))

def binary_search(a,n,key):
    low =0
    mid =0
    high = n-1
    while low <= high:
        mid = low + (high-low)//2
        if a[mid] == key:
            return 0
        elif a[mid] < key:
            low =mid +1
        else:
            high =mid -1
    return -1

val = binary_search(a,n,key)
if val == 0:
    print("Element is found")
else:
    print("Element is not found")