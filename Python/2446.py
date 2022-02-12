N = int(input())

for i in range(N):
    print(' ' * i + '*' * ((N - i) * 2 - 1))

for i in reversed(range(N-1)):
    print(' ' * i + '*' * ((N - i) * 2 - 1))
