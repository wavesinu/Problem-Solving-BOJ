N = int(input())
number = []

# 입력한 숫자를 문자열로 변환, 각 자리수를 number에 추가
for i in str(N):
    number.append(int(i))

# 오름차순으로 정렬
number.sort(reverse=True)

for i in number:
    print(i, end='')
