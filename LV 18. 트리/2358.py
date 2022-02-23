N = int(input())
nick = {}
for _ in range(N):
    user = input()
    temp = ""
    for i in list(user):
        temp += i
        if nick.get(temp) == None:
            print(temp)
            nick[temp] = user
            break
