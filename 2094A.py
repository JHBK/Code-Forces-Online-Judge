n = int(input())

for i in range(n):
    s = input()
    words = s.split()

    result = ''.join(word[0] for word in words)
    print(result)
