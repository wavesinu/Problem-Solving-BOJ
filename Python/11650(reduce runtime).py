import sys

T = int(sys.stdin.readline())
coordinate = []

for i in range(T):
    coordinate.append(list(map(int, sys.stdin.readline().split())))

# x좌표를 우선 기준으로, 이후 y 좌표를 기준으로 좌표를 정렬함
coordinate.sort(key=lambda x: (x[0], x[1]))

for i in coordinate:
    print(i[0], i[1])
