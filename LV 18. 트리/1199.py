# 1199. 가족 관계 출력하기

class person:
    def __init__(self, name):
        self.name = name
        self.parents = []
        self.child = []

names = {}
result = {
    11 : "Grand Parent",
    1 : "Parent",
    2 : "Child",
    22 : "Grand Child",
    12 : "Sibling",
    1122 : "Cousin"
}
check = {}
idx = 0

N = int(input())
for _ in range(N):
    A, B = map(str, input().split())
    if names.get(A) == None:
        names[A] = person(A)
        check[A] = 0
        idx += 1
    if names.get(B) == None:
        names[B] = person(B)
        check[B] = 0
        idx += 1
    names[A].child.append(B)
    names[B].parents.append(A)

A, B = map(str, input().split())
cnk = False

def dfs(idx : str, pre : int):
    global check
    global cnk
    if check[idx] == 1:
        return
    else:
        check[idx] = 1
    if cnk:
        return
    if idx == A:
        if result.get(pre) != None:
            print(result.get(pre))
        else:
            print("No Relation")
        cnk = True
        return

    if pre > 1000:
        return 0
    for i in names[idx].parents:
        dfs(i, pre * 10 + 1)
    for i in names[idx].child:
        dfs(i, pre * 10 + 2)

dfs(B, 0)
if cnk == False:
    print("No Relation")