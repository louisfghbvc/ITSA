# happy python...
# just eval. a builtin func to run some code
for _ in range(int(input())):
    s = input()
    try:
        eval(s)
        print('true')
    except:
        print('false')
