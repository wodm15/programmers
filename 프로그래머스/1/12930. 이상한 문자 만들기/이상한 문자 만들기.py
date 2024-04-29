def solution(s):
    answer=[]
    t= s.split(' ')
    for k in t:   
        for i in range(len(k)):
            if i%2==0:
                answer.append(k[i].upper())
            else:
                answer.append(k[i].lower())
        answer.append(' ')
    answer.pop()   
    return ''.join(answer)

 