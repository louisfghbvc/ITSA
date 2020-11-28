# just rolling prefix sum and simple implement
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    tot, pre = 0, 0
    for i in range(n):
        tot += pre + arr[i]//2
        pre += arr[i]
    print(tot)
