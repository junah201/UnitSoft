# 2004. a 부터 b까지 출력하기

a, b = map(int, input().split())

for i in range(min(a,b), max(a,b)+1):
    print(i, end=" ")
