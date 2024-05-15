def solution(n):
    k=n
    t=bin(n)[2:]
    a=str(t).count('1')
    
    while(1):
        k+=1
        t2=bin(k)[2:]
        a2=str(t2).count('1')
        if (a==a2):
            return k
