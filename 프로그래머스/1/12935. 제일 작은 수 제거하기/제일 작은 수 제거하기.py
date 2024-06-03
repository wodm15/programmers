def solution(arr):


    if len(arr)==1:
        return [-1]
    
    a=min(arr)
    
    arr.remove(a)
    return arr