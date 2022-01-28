price = int(input())
changes = [500, 100, 50, 10, 5, 1]
cnt = 0

result = 1000 - price

for coin in changes:
    cnt += (result // coin)
    result %= coin

print(cnt)
