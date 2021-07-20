#드디어 민규쌤을 대체할 쌤이...? (S)

N,M,L= map(int, input().split())

#임시 리스트로 입력
input_temp_Arr = list(map(int, input().split()))

#내장 함수로 정렬
input_temp_Arr.sort()
Arr = []

#실력이 L보다 작거나 M보다 크면 메인 리스트로 이동
for i in input_temp_Arr:
    if i>=L and i<=M:
        Arr.append(i)
        
sum = 0
bigsum=0
for i in range(len(Arr)):
    for j in range(len(Arr)-i):
        sum+=Arr[i+j]
        if sum>M:
            break
        elif sum>bigsum:
            bigsum = sum
    sum =0

print(bigsum)
