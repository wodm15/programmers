def solution(s):
    result=list()
    num_0=0
    time=0
    while s!='1':
        num_0+=s.count("0")
        s=s.replace('0','')
        c=len(s)
        s=bin(int(c))[2:]
        time+=1
    result.append(time)
    result.append(num_0)
    return result
    