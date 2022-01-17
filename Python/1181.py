n = int(input())
lst = []

for i in range(n):
    lst.append(input())

lst = list(set(lst))
list.sort(key=lambda x: (len(x), x))

print("\n".join(lst))

