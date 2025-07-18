t=int(input())
arr=[int(x) for x in input().split()]
arr = [1 if x > 0 else 0 if x==0 else 2 for x in arr]

for n in arr:
    print(n, end=' ')

