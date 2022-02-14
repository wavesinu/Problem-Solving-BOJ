import sys

T = int(sys.stdin.readline())
coordinate = []

for _ in range(T):
    coordinate.append(list(map(int, sys.stdin.readline().split())))

# y좌표의 크기를 기준으로, 이후 x 좌표를 기준으로 좌표를 내림차순으로 정렬함
coordinate.sort(key=lambda x: (x[1], x[0]))

for i in coordinate:
    print(i[0], i[1])
