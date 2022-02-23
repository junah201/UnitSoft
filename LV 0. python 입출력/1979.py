# 1979. [basic] 입출력13

N = input()
M = len(N)

for i in list(N):
    M -= 1
    print("[", end="")
    print(i, end="")
    for _ in range(M):
        print("0", end="")
    print("]")