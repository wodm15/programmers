from math import gcd #gcd란 최대공약수

def solution(arr):
    result=1
    for n in arr:
        result=result * n //gcd(result,n)
                
            
    return result