def solution(babbling):
    answer = 0
    talk = ['aya', 'ye', 'woo', 'ma']

    for bab in babbling: 
        for i in talk:
            if i*2  not in bab:  
                bab = bab.replace(i, ' ')
                
        if bab.isspace():  
            answer += 1
            
    return answer