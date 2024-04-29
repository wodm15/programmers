def solution(d, budget):
    result=0
    d.sort()
    for i in range(len(d)):
        if d[i]<=budget:
            result=result+1
            budget=budget-d[i]
        else:
            break
    return result