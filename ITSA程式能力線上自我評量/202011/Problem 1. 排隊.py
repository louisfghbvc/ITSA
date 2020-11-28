# num are too big...
# dp + memo
from functools import lru_cache 
for _ in range(int(input())):
    a, b = map(int, input().split(','))
    @lru_cache(None)
    def dfs(x, y, tot):
        if x == 0 and y == 0: return 1
        res = 0
        if x: res += dfs(x-1, y, tot+1)
        if y and tot: res += dfs(x, y-1, tot-1)
        return res
    print(dfs(a, b, 0))
