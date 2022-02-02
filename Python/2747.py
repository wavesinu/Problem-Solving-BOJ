N = int(input())
Fib = [0, 1]

for i in range(2, N + 1):
    Fib.append(Fib[-1] + Fib[-2])

print(Fib[N])
