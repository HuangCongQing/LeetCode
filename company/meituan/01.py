import sys
from itertools import permutations # 调用

line = sys.stdin.readlines()
# count = int(line[0].strip())
cards = map(int, line[1].split())

res = permutations(cards)
res = set(res)
res = sorted(res)
# s输出
print(len(res))
for it in res:
    it = map(str, it)
    print(" ".join(it)) # 空格 