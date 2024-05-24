def solution(phone_number):
    phone=list(phone_number)
    for i in range(len(phone_number)-4):
        phone[i]='*'
    
    answer=''.join(map(str, phone))
    return answer