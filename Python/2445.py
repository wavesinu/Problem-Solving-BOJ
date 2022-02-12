N = int(input())

for i in range(1, N+1):
    print('*' * i + ' ' * ((N - i) * 2) + '*' * i)

for i in reversed(range(N)):
    print('*' * i + ' ' * ((N - i) * 2) + '*' * i)
