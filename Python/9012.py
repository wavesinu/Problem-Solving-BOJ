N = int(input())

for i in range(N):
    VPS = input()
    parSeq = []

    for j in VPS:
        if j == '(':
            parSeq.append(j)
        elif j == ')':
            if len(parSeq) != 0 and parSeq[-1] == "(":
                parSeq.pop()
            else:
                parSeq.append(")")
                break

    if len(parSeq) == 0:
        print("YES")
    else:
        print("NO")
