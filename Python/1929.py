import sys

m, n = map(int, sys.stdin.readline().split())


def is_prime(m, n):
    n += 1
    sieve = [True] * n
    for i in range(2, int(n ** 0.5) + 1):
        if sieve[i]:
            for j in range(2 * i, n, i):
                sieve[j] = False

    # return [i for i in range(2, n) if sieve[i] == True]
    for i in range(m, n):
        if i > 1 and sieve[i] == True:
            print(i)


is_prime(m, n)
