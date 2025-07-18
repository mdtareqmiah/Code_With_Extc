t=int(input())
arr=[int(x) for x in input().split()]
n=int(input())
if n in arr:
    add=arr.index(n)
    print(add)
else:
    print(-1)
