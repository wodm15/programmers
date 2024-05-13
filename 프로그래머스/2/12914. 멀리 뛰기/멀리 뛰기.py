def solution(n):
    answer = 0
    a=0
    b=1
    #1,2,3,5,8,13
    for i in range(1,n+1):
        a,b=b,a+b
    
    answer=b%1234567
    return answer