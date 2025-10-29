# Take two strings from user
s1 = input().lower()
s2 = input().lower()

if s1 < s2:
    print(f"-1")
elif s1 > s2:
    print(f"1")
else:
    print(f"0")
