N = int(input())

A = list(map(int, input().split(' ')))
B = list(map(int, input().split(' ')))
result = 0

for i in range(N):
    result += A.pop(A.index(min(A))) * B.pop(B.index(max(B)))
    # pop 함수를 사용하여 A의 최소값과 B의 최대값을 빼주는 것을 반복한다.
print(result)

