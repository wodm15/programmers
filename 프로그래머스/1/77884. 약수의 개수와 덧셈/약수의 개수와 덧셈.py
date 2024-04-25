def solution(left, right):
    
    result=0
    for i in range(left, right+1): #i= 13~17
        cnt=0
        for j in range(1,i+1):
            if(i%j==0):
                cnt=cnt+1
        if (cnt%2 == 0):
            result = result +i
            cnt=0;
        else:
            result = result-i
            cnt=0;
        
    return result