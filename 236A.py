s = input()

unique_chars = set(s)
count = len(unique_chars)

if count % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
