import sys

if __name__ == "__main__":
    N = int(input())
    rope = [int(sys.stdin.readline()) for i in range(N)]
    rope.sort(reverse=True)

    result = 0

    for i in range(len(rope)):
        tmp = rope[i] * (i + 1)

        if tmp > result:
            result = tmp

    print(result)