word_list = list()
sorted_word_list = list()

for _ in range(int(input())):
    word_list.append(str(input()))

# 입력받은 문자들 중 중복을 제거하기 위해 set type로 형변환, set은 중복을 허용하지 않음.
set_word_list = set(word_list)

# (단어의 길이, 단어) '튜플'을 sorted_list에 추가
for word in set_word_list:
    sorted_word_list.append((len(word), word))

sorted_word_list.sort()
for word_len, word in sorted_word_list:
    print(word)
