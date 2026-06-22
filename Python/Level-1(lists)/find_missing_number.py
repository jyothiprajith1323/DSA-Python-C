a = []
n = int(input())
count = 0

for _ in range(n):
    a.append(int(input()))

for i in range(n):
    count +=1
    if(count != a[i]):
        print(f"{i+1} = {count}")
        count +=1
