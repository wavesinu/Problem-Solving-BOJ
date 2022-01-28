A, B = input().split()

# replace()를 활용
min_result = int(A.replace('6', '5')) + int(B.replace('6', '5'))
max_result = int(A.replace('5', '6')) + int(B.replace('5', '6'))

print(min_result, max_result)
