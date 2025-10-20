n = int(input())

for i in range(n):
    # print(f"Test case {i+1}:")
    # x = int(input())
    # y = int(input())
    x, y = map(int, input().split())
    # print(x, y)

    if x == y:
        print("0")
    elif x == 1 or y == 1:
        print("1")
    elif x % y == 0 or y % x == 0:
        print("1")
    else:
        print("2")
