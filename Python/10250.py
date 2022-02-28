import sys

testcase = int(sys.stdin.readline())

for i in range(testcase):
    height, width, customer = map(int, sys.stdin.readline().split())
    floor = customer % height
    room = customer // height + 1

    if floor == 0:
        room -= 1
        floor = height

    print(floor * 100 + room)
    