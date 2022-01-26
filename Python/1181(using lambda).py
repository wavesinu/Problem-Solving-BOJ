word_num = int(input())
word_list = []

for _ in range(word_num):
    word = str(input())
    word_cnt = len(word)
    word_list.append((word, word_cnt))

word_list = list(set(word_list))

word_list.sort(key=lambda word: (word[1], word[0]))

for word in word_list:
    print(word[0])
