# Enter your code here. Read input from STDIN. Print output to STDOUT
t = input()
for i in range(0,t):
    n = input()
    m = 1000000007
    n = (4*n*n*n+3*n*n+8*n-9)/6
    n = n%m
    print n
