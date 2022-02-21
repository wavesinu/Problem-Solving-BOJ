import sys

N = int(sys.stdin.readline())
# 값을 배열에 저장하여 중복되는 연산을 수행하지 않음.
arr = [0 for _ in range(N + 1)]
arr[1] = 1

for i in range(2, N + 1):
    arr[i] = arr[i - 2] + arr[i - 1]

print(arr[-1])
