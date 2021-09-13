# 95%===================
# n=int(input())
# ops = []
# counter = 0
# while(n):
#     n-=1
#     # temp = input().split()
#     inputs = list(map(int, input().split()[1:]))
#     inputs.append(counter)
#     counter+=1
#     ops.append(inputs)

ops = [[10,1,2,0], [5,3,1], [1,3,2], [2,3], [33, 4]]
visited = set()
queue = []
ans = 0
def bfs(queue, visited):
    ans = 0
    while(len(queue)>0):
        n = len(queue)
        while(n):
            n-=1
            op = queue[0]
            queue.pop(0)
            cost = op[0]
            if len(op)==2:
                ans = max(ans, cost)

            for i in range(1, len(op)-1):
                # ops[op[i]][0] +=cost
                temp = ops[op[i]].copy()
                temp[0] +=cost
                visited.add(temp[-1])
                queue.append(temp)
    return ans
for i in range(len(ops)):
    if i not in visited:
        visited.add(i)
        queue.append(ops[i])
        ans = max(ans, bfs(queue, visited))
print(ans)

# 65%===================

# n=int(input())
# ops = []
# while(n):
#     n-=1
#     inputs = list(map(int, input().split()[1:]))
#     ops.append(inputs)
# queue = [ops[0]]
# ans = 0
# while(len(queue)>0):
#     n = len(queue)
#     while(n):
#         n-=1
#         op = queue[0]
#         queue.pop(0)
#         cost = op[0]
#         if len(op)==1:
#             ans = max(ans, cost)

#         for i in range(1, len(op)):
#             # ops[op[i]][0] +=cost
#             temp = ops[op[i]].copy()
#             temp[0] +=cost
#             queue.append(temp)
# print(ans)