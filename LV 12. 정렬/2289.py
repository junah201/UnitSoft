#2289. 광석병

N = int(input())

name = []
ATGC = []
result = []
for i in range(N):
    temp1,temp2 = map(str,input().split())
    name.append(temp1)
    ATGC.append(temp2)

check = input()
num = 0

for i in range(N):
    if check in ATGC[i]:
        result.append(name[i])

if len(result)==0:
    print("Thanks for your support!")
else:
    result.sort()
    for i in result:
        print(i)
