while True:
    word = input()

    if word == '0':
        break
    # 문자열 슬라이싱을 이용하여 문자열을 거꾸로 변환
    if word == word[::-1]:
        print("yes")
    else:
        print("no")