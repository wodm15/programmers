def solution(k, score):
    answer = []
    result=[]
    for i in range(len(score)):
        answer.append(score[i])
        answer.sort()
        if (len(answer) <= k):
            result.append(answer[0])
        elif (len(answer) > k):
            answer.pop(0)
            result.append(answer[0])
    return result