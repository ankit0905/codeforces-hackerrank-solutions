n=input()
if n==2 or n==1:
    print "-1"
else:
    if n%2==1:
        x=1+(n**2)
        x=x+1
        x=x/2
        print "%d %d" %(x-1,x)
    else:
        x=(n**2)
        x=x/2
        x=x+2
        x=x/2
        print "%d %d" %(x-2,x)
