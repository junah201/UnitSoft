# 2006. 두 실수 사이 출력하기

a, b = map(float, input().split())

a = round(a*100.0)
b = round(b*100.0)

while a!=b+1:
    print("%.2f" % (a/100.0), end=" ");
    a += 1
