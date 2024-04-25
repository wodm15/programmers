
def solution(n):
    n = list(str(n))
    n.sort(reverse = True)
    result = ''.join(n)
    result = int(result)
    return result