import sys


def main():
    input = sys.stdin.read
    data = input().splitlines()
    n = int(data[0])
    output = []

    for i in range(1, n + 1):
        s = data[i]
        # First sort the string, then reverse it
        sorted_string = ''.join(sorted(s))
        reversed_sorted_string = sorted_string[::-1]
        output.append(reversed_sorted_string)

    sys.stdout.write('\n'.join(output))


if __name__ == "__main__":
    main()
