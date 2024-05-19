def solution(k, m, score):
    score.sort(reverse=True)
    answer=0
    
    while (len(score)%m !=0):
        score.pop()
        
    for i in range(0, len(score), m):
        tmp = score[i:i+m]
        # print(tmp)
        # print(min(tmp))
        answer += min(tmp) * m
        
    return answer