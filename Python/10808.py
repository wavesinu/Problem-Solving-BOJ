S = input()
alpha = [0] * 26

for i in S:
    # 문자를 아스키 코드로 변환, 숫자로 활용
    # 아래 코드는 다음과 같음
    # alpha[ord(i) - 97] += 1
    alpha[ord(i) - 97] = S.count(i)

# for i in alpha:
#     print(i, end=" ")
print(*alpha)
