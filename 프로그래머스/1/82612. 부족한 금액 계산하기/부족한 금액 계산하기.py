def solution(price, money, count):
    sum =0
    for i in range(1,count+1):
        sum = sum+(i*price)
    if (sum <money):
        return 0
    answer=sum-money
    return answer