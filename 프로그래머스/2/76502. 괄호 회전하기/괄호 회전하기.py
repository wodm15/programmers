def check(s):
    while True:
        if '[]' not in s and '{}' not in s and '()' not in s:
            break
        s = s.replace('[]','')
        s = s.replace('{}','')
        s = s.replace('()','')
    return 1 if len(s) == 0 else 0
            
    
def solution(s):

    result = 0
    for i in range(len(s)):
        result += check(s)
        s = s[1:]+ s[0] 

    return result
    