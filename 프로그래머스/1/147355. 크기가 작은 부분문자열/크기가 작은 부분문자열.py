def solution(t, p):
    result=0
    length=len(str(t))
    length2=len(str(p))
    temp=int(p)
    for i in range(length-length2+1):
        if(int(t[i:length2+i]) <= temp):
            result+=1

    return result