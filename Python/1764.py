N, M = map(int, input().split())

not_heard = []
not_seen = []

for i in range(N):
    not_heard.append(str(input()))

for i in range(M):
    not_seen.append(str(input()))

result = sorted(list(not_heard & not_seen))

print(len(result))

for i in result:
    print(i)

