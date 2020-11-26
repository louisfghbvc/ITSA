# just input output. 

import sys
def solve():
    i = 0
    lt = ["Hi", "Hello", "How do you do", "How are you"]
    for line in sys.stdin:
        s = line.rstrip()
        if s == 'Bye':
            print('Bye')
            i = 0
            continue
        if s not in lt:
            print('Sorry')
            i = 0
            continue
        print(lt[i])
        i += 1
        i %= 4

if __name__ == "__main__":
    solve()
