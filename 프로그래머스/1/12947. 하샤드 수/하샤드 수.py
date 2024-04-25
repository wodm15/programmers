def solution(x):
    check=0
    a=[]
    for i in str(x):
        check=check+int(i)
    
    if( x%check == 0 ):
        return True
    else:
        return False