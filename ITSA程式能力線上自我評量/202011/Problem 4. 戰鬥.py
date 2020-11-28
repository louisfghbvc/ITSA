# simple compare
for _ in range(int(input())):
    m = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort(key=lambda x: -x)
    b.sort()
    a_w, b_w = 0, 0 
    for i in range(m):
        a_w += a[i] > b[i]
        b_w += b[i] > a[i]
    print(f'{a_w} {b_w}')
