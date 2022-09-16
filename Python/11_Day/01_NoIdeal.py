n,m=map(int,input().split())
#take input elements list
c=list(map(int,input().split()))
A=set(map(int,input().split()))
B=set(map(int,input().split()))
#intially count as 0
count=0
for i in c:
    if i in A:
        count+=1
    if i in B:
        count-=1
print(count)