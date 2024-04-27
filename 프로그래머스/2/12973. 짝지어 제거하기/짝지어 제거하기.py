def solution(s):  #스택으로 풀기
    stack=[]
    for i in s:
        if len(stack)==0:
            stack.append(i)
        elif i==stack[-1]:
            stack.pop()
        else:
            stack.append(i)
    if stack:
        return 0
    else:
        return 1