def solution(n,a,b):
    answer=0
    t=list()
    while(a!=b): #12
        n=n//2
        if a%2==0:
            a=a//2
        elif a==1:
            a=1
        else:
            a=a//2+1
    
        if b%2==0:
            b=b//2
        elif b==1:
            b=1
        else:
            b=b//2+1
        
        answer+=1
        

    return answer