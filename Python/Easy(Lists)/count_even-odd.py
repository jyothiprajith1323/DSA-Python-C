a = []
n = int(input())
odd = even = 0
odd_no = []
even_no = []

for _ in range(n):
    a.append(int(input()))

for i in range(n):
    if a[i]%2 == 0:
        odd +=1
        odd_no.append(a[i])
    else:
        even +=1
        even_no.append(a[i])

print(f"odd = {odd}\neven = {even}")
print(f"odd numbers = {odd_no}\neven numbers = {even_no}")