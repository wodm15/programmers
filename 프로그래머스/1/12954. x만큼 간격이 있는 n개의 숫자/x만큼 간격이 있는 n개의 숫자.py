def solution(x, n):
    a=[]
    sum=x
    
    for i in range(n):
        
        a.append(sum)

        sum=sum+x

    return a