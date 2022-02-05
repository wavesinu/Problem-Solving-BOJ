N = 9
dwarf1, dwarf2 = 0, 0
arr = [int(input()) for _ in range(N)]

for i in range(N):
    for j in range(i + 1, N):
        if sum(arr) - (arr[i] + arr[j]) == 100:
            dwarf1 = arr[i]
            dwarf2 = arr[j]

arr.remove(dwarf1)
arr.remove(dwarf2)

print('\n'.join(map(str, sorted(arr))))
