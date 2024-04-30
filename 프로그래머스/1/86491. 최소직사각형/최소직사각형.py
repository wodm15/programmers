def solution(sizes):
    a=[]
    b=[]
    for t in sizes:
        a.append(max(t))
        b.append(min(t))
        
    return max(a)*max(b)