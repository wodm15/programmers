def solution(name, yearning, photo):
    answer = []
    dic =dict( zip(name, yearning))
    for peopleList in photo:
        score = 0
        for people in peopleList:
            score = score + dic.get(people, 0)
        answer.append(score)

        
    return answer