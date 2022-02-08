import sys

pw = sys.stdin.readline()
s = [i ** 2 for i in map(int, pw.split())]
print(sum(s) % 10)
