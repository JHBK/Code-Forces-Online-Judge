# Take integer input for number of test cases
t = int(input())

# Run for t test cases
for _ in range(t):
    # Take four integers in one line separated by spaces
    a, b, c, d = map(int, input().split())

    # Check if all four numbers are equal
    if a == b == c == d:
        print("yes")
    else:
        print("no")
