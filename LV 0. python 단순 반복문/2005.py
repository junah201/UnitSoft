# 2005. 알파벳 출력하기

a, b = map(str, input().split())

for i in range(ord(a), ord(b)+1):
    print(chr(i), end=" ")
