def solution(n):
    answer = 1
    for i in range(1,n//2+1): #15일 경우 1부터 8까지
        sum=0
        while sum<n:
            sum+=i
            if sum==n:
                answer+=1
                i+=1
                break
            i+=1
           
    return answer