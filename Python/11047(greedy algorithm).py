N, K = map(int, input().split())
coin_list = []
count = 0

for i in range(N):
    coin_list.append(int(input()))

# 가장 큰 동전의 가치부터 탐색
for i in reversed(range(N)):
    count += K // coin_list[i]
    K %= coin_list[i]

print(count)
