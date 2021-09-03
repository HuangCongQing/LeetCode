import sys
kkk = sys.stdin.readline().strip()

def dfs(kuohu):
    if not  kuohu:
        return 1
    count = 0
    kuohu_len = len(kuohu) -1
    for index , item in enumerate(kuohu):
        if item=="(":
            count+=1
        else:
            count-=1
        if count == 0 and index!=kuohu_len:
            return dfs(kuohu[:index+1]) * dfs(kuohu[index+1:])
    return 1+ dfs(kuohu[1:-1])

result = dfs(kkk)%1000000007
print(result)