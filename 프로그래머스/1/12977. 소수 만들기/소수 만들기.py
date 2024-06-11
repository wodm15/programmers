from itertools import permutations ,combinations

def solution(nums):
    answer = 0
    
    for comb in combinations(nums, 3):
        s = sum(comb)
        print(s)
        if is_prime_number(s):
            answer += 1
            
    return answer
        

def is_prime_number(x):
    if x < 2:
        return False
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True