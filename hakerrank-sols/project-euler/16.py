# Enter your code here. Read input from STDIN. Print output to STDOUT
t=input();
for i in range(0,t):
    n=input()
    num=2**n
    sum1=0
    while num>0:
        rem=num%10
        sum1+=rem
        num=num/10
    print sum1
