def solution(n, words):
    result=list()
    k=1
    t=1
    for i in range(len(words)):
        if words[i] in result:
            return [k,t]
        if i <len(words)-1 and i>=1:
            if words[i-1][-1] != words[i][0]:
                return [k,t]
        result.append(words[i])
        k=k+1
        
        if k==n+1:
            k=1
            t=t+1
            
    
    return [0,0]