

def solution(n, arr1, arr2):
    # a=bin(arr1[1])  #bin 2(0b), oct 8(0o), hex 16(0x)
    arr3=[]
    answer=[]
    
    for i in range(n):

        t=bin((arr1[i]) | (arr2[i]))[2:]
        arr3.append(t.rjust(n,'0'))
        
        answer.append(arr3[i].replace('1','#').replace('0',' '))
    return answer

   