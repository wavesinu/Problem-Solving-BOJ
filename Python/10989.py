import sys

N = int(sys.stdin.readline())
check_list = [0] * 10001

for _ in range(N):
    check_list[int(sys.stdin.readline())] += 1
    # 입력값을 받을 때마다 그 입력값과 같은 인덱스에 +1을 해준다.
    # 나중에 입력을 다 받고나면, 0보다 큰 요소를 갖는 인덱스를 찾아서 그 수만큼 인덱스를 출력해주면 된다.

for i in range(10001):
    if check_list[i] != 0:
        for j in range(check_list[i]):
            print(i)
