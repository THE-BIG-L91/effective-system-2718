maximum = 0
longest_length = 0

def collatz(n):
    if n % 2 == 0:
        return n//2
    else:
        if n == 1:
            return 1
        return (3*n) + 1
    
def evalCollatz(n):
    length = 1
    k = n
    while k != 1:
        length += 1
        k = collatz(k)
    return length

for i in range(2,1000000):
    collat = evalCollatz(i)

    if collat > maximum:
        maximum = collat
        longest_length = i

print(longest_length)
