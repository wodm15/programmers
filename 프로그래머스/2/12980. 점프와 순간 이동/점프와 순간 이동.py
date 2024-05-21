def solution(n):
    energy=0
    jump=1
    
    while n>1:
        if (n%2==0):
            n=n//2
        else:
            jump+=1
            n-=1


    return jump