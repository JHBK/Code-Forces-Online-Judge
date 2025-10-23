import sys

input = sys.stdin.readline

t = int(input())

for i in range(t):
    inputn = sys.stdin.readline

    n = int(inputn())
    count = 0
    for i in range(n+1):
        a = i % 3
        b = i % 5
        if a == b:
            count += 1
    sys.stdout.write(str(count) + '\n')
