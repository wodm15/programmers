def solution(n):
    pre=0
    current=1
    
    for i in range(2,n+1):
        pre,current=current,pre+current
        
    return current%1234567