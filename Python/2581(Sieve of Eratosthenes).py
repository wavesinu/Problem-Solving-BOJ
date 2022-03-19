M = int(input())
N = int(input())

sieve = [False for i in range(N + 1)]

for i in range(2, int(N ** 0.6)):
    if sieve[i] == False:
        for j in range(2 * i, N + 1, i):
            sieve[j] = True

result = []

for i in range(M, N + 1):
    if i >= 2:
        if sieve[i] == False:
            result.append(i)

if len(result) == 0:
    print(-1)
else:
    print(sum(result))
    print(min(result))
