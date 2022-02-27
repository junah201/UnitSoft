# 2358. 닉네임의 닉네임

prefix = {}

N = int(input())
for _ in range(N):
    nick = input()
    check = True
    for i in range(1,len(nick)+1):
        # print(nick[:i])
        if prefix.get(nick[:i]) == None and check:
            print(nick[:i])
            check = False
        prefix[nick[:i]] = True
    if check:
        for i in range(2, 100002):
            if prefix.get(nick + str(i)) == None:
                prefix[nick + str(i)] = True
                print(nick + str(i))
                break;