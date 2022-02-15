import sys

while True:
    triangle = list(map(int, sys.stdin.readline().split()))
    c = max(triangle)

    # 세 변의 길이가 0인 경우 종료
    if sum(triangle) == 0:
        break

    # 가장 큰 변의 길이를 제거
    triangle.remove(c)
    if triangle[0] ** 2 + triangle[1] ** 2 == c ** 2:
        print("right")
    else:
        print("wrong")
