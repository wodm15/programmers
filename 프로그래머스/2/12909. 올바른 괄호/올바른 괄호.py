def solution(s):
    #())( -> 반례
    t=0
    for i in range(len(s)):
        if s[0]==')':
            return False
        elif s[i] == '(':
            t+=1
        elif t==0 and s[i]==')':
            return False
        elif s[i]==')':
            t-=1
        
    
    if t==0:
        return True
    else:
        return False