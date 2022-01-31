word = input().upper()
# 중복 문자열을 제거하여 리스트에 저장
word_list = list(set(word))
# 각 문자의 빈도수를 저장할 리스트를 선언
cnt = []

for i in word_list:
    # 각 문자의 빈도수를 리스트에 저장
    cnt.append(word.count(i))

if cnt.count(max(cnt)) > 1:
    # 만약 빈도수의 최댓값이 중복될 경우 "?"를 출력
    print("?")
else:
    # 가장 많이 사용된 문자를 출력
    index = cnt.index(max(cnt))
    print(word_list[index])
