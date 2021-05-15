for _ in range(int(input())):
    n, k = map(int, input().split())
    k -= 1
    def dfs(n, step):
        if n == 1: return 0
        return (dfs(n-1, step) + step) % n
    print((dfs(n, 2) + k) % n + 1)
