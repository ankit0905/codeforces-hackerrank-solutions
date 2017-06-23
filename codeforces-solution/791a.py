a,b = [int(i) for i in input().split()]
if a>b:
    print(0)
else:
    ct = 0
    while True:
        a = a*3
        b = b*2
        ct = ct+1
        if a > b:
            print(ct)
            break
