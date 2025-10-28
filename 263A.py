matrix = []


# Take input for 5 rows
for i in range(5):
    row = list(map(int, input().split()))
    matrix.append(row)

# Find the position of 1
found = False
for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            x = abs(i+1-3)
            y = abs(j+1-3)
            result = x+y
            print(result)
            found = True
            break
    if found:
        break
