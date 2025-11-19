while True:
    try:
        n, a = map(int, input().split())
        total = 0
        power = 1
        for i in range(1, n + 1):
            power *= a        
            total += i * power  
        print(total)
    except EOFError:
        break
