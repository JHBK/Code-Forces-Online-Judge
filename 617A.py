t = int(input())
result = 0
if t <= 5:
    print(f"1")
elif t <= 10:
    print(f"2")
else:
    if t % 5 == 0:
        result = t/5
        print(int(result))
    else:
        result = t/5 + 1
        print(int(result))
