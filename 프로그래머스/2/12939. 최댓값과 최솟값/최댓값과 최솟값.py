def solution(s):
    s = list(map(int,s.split()))
    a=min(s)
    b=max(s)
    
    return str(a)+' '+str(b)