n = int(input())
numbers = list(map(int, input().split()))


def prime_num(x):
    if x == 1:
        return False
    elif x == 2:
        return True

    for i in range(2, x):
        if x % i == 0:
            return False
    return True


cnt = 0

for i in numbers:
    if prime_num(i):
        cnt += 1

print(cnt)
