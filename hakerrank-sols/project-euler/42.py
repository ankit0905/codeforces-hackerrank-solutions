from math import sqrt
t = input()
for i in range(0,t):
    n = input()
    n = n*2.0
    det = 1+4.0*n
    root = sqrt(float(det))-1
    root = root/2.0
    if root == float(int(root)):
        print int(root)
    else:
        print -1
