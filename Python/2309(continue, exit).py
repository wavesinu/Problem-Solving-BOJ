N = 9
arr = [int(input()) for _ in range(N)]
# 입력한 배열을 정렬
arr.sort()

for i in range(N):
    for j in range(i + 1, N):
        if sum(arr) - (arr[i] + arr[j]) == 100:
            for k in range(N):
                if i == k or j == k:
                    continue
                print(arr[k])
            exit()

print('\n'.join(map(str, arr)))
