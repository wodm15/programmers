def solution(cards1, cards2, goal):
    result="Yes"

    for i in goal:
        
        if  cards1 and cards1[0]==i:
            cards1.pop(0)
            
        elif  cards2 and cards2[0]==i:
            cards2.pop(0)

        else:
            result="No";
            break
    
    
    return result