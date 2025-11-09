n = int(input().strip())

for _ in range(n):
    k = int(input().strip())
    s1, s2 = input().strip().split()

    if sorted(s1) == sorted(s2):
        print("yes")
    else:
        print("no")
