def solution(a, b, n):
    t=0
    sum=0
    while(n>=a):
        t=(n%a)
        n=(n//a)*b
        sum=sum+n
        n=n+t
    
    return sum