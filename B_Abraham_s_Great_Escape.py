t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    
    if k > n * n:
        print("NO")
        continue
    
    grid = [['D']*n for _ in range(n)]
    
    full_rows = k // n
    rem = k % n
    
    # Fill full rows with 'U'
    for i in range(full_rows):
        for j in range(n):
            grid[i][j] = 'U'
    
    # Fill remaining cells in the next row
    for j in range(rem):
        grid[full_rows][j] = 'U'
    
    print("YES")
    for row in grid:
        print(''.join(row))
