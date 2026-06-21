a = []
n = int(input())

for _ in range(n):
    a.append(int(input()))

if n < 2:
    print("Need at least two numbers")
else:
    max_value = a[0]
    max_value_2 = float("-inf")

    for value in a[1:]:
        if value > max_value:
            max_value_2 = max_value
            max_value = value
        elif value > max_value_2 and value != max_value:
            max_value_2 = value

    if max_value_2 == float("-inf"):
        print(f"The max value is {max_value}")
        print("There is no second distinct maximum")
    else:
        print(f"The max value is {max_value}")
        print(f"The 2nd max value is {max_value_2}")