def solution(n):
    t=''
    while(n>=1):
        a=n%3
        t=t+str(a)
        n=n//3
    
    return int(t,3)