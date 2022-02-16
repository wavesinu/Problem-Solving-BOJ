import sys

dice = list(map(int, sys.stdin.readline().split()))
dice.sort()
set_dice = set(dice)

if len(set_dice) == 1:
    print(10000 + dice[0] * 100)
elif len(set_dice) == 3:
    print(dice[-1] * 100)
else:
    print(1000 + dice[1] * 100)
