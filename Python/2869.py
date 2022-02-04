A, B, V = map(int, input().split())

height = (V - B)

if height % (A - B) == 0:
    time = int(height // (A - B))
else:
    time = int(height // (A - B)) + 1

print(time)
