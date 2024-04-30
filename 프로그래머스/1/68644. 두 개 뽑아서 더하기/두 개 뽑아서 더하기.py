def solution(numbers):
    answer = []
    result=[]
    for i in range(len(numbers)):
        for j in range(i+1,len(numbers)):
            answer.append(numbers[i]+numbers[j])
    
    answer2 = set(answer)
    result = list(answer2)

    return sorted(result)