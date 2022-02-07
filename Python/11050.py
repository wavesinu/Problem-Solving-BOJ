def bino_coef(n, k):
    if k == 0 or n == k:
        return 1
    return bino_coef(n - 1, k) + bino_coef(n - 1, k - 1)


N, K = map(int, input().split())
print(bino_coef(N, K))
