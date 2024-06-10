import math

def solution(n):
    result = 0
    for a in range(2,n+1):
        if(prime(a)):
            result=result+1

    return result

    
def prime(a):
    if (a) <=1:
        return False
    for i in range(2,int(math.sqrt(a))+1):
        if(a%i == 0):
            return False
    return True
