s = input().strip()

stack = []
pairs = {')': '(', '}': '{', ']': '['}

for ch in s:
    if ch in pairs.values():
        stack.append(ch)
    elif ch in pairs:
        if not stack or stack.pop() != pairs[ch]:
            print("False")
            break
else:
    if not stack:
        print("True")
    else:
        print("False")
