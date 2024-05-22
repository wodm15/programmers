def solution(elements):

    elements = elements * 2
    
    result = list()
    for i in range(len(elements)//2):
        for j in range(len(elements)//2):
            result.append(sum(elements[j:j+i+1]))
    
    answer=list(set(result))
    return len(answer)
