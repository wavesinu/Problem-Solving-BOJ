from itertools import combinations
# 순열 조합 라이브러리 itertools의 combinations 함수를 사용

N, M = map(int, input().split())
arr = list(map(int, input().split()))
result = 0

for cards in combinations(arr, 3):
    # 카드 3장의 합의 경우의 수를 구함
    tmp_sum = sum(cards)

    if result < tmp_sum <= M:
        result = tmp_sum

print(result)
