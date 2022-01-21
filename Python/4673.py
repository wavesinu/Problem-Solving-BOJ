number = set(range(1, 10001))
self_number = set()

for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    self_number.add(i)

result = sorted(number - self_number)

for i in result:
    print(i)
