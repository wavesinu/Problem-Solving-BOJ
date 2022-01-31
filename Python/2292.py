N = int(input())
cnt = 1
room_border = 1

while N > room_border:
    room_border += 6 * cnt
    cnt += 1
print(cnt)
