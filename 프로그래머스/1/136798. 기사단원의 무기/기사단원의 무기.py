def solution(number, limit, power):
    result = []
    for i in range(1, number + 1):
        div_count = count_divisors(i)
        if div_count > limit:
            result.append(power)
        else:
            result.append(div_count)

    return sum(result)

def count_divisors(n):
        count = 0
        for i in range(1, int(n ** 0.5) + 1):
            if n % i == 0:
                count += 1
                if i != n // i:
                    count += 1
        return count
