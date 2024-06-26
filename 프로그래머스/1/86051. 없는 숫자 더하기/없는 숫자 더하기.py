def solution(numbers):
    answer=0
    for i in range(1,10):
        if i not in numbers:
            answer= answer+ i
            
    return answer
