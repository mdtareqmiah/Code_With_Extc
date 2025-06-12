t=int(input())
while t>0:
    a,b=map(int, input().split())
    # b=int(input())
    s=""
    i=0
    for i in range(b):
        s+="1"
        i+=1
    i=1
    for i in range(a-b):
        s+="0"
        i+=1

    # for i in range(a):
    #     print(s)
    #     i+=1
    print(s)
    t-=1
