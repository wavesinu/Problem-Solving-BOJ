import sys

if __name__ == "__main__":
    N = int(sys.stdin.readline())
    member = []

    for i in range(N):
        age, name = map(str, sys.stdin.readline().split())
        age = int(age)  # 나이를 정수로 변환
        member.append((age, name))
    # 나이를 내림차순으로 정렬
    member.sort(key=lambda x: x[0])

    for i in member:
        print(i[0], i[1])
