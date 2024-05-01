def solution(food):
    a=''
    for i in range(1, len(food)):
        a= a+ str(i) * (food[i]//2) #1 2 3
    
    
    return a+'0'+a[::-1]

