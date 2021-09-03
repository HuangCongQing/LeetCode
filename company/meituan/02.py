# 小美写作文
# def finddpos(string, opt, data):
#     if opt = 1:
#         string+=data
#         return string
#     elif opt==2:
#         pos2 = data
#         pos_L = string.find(string[pos2], end=pos2)

# print(5)
# print(2)
# print(-1)

import sys
from collections import defaultdict

line = sys.stdin.readlines()
opt_str = line[0].strip()
count = int(line[1].strip())
opts = line[2:count+2]
str_dict = defaultdict(lambda :[])
for index, item in enumerate(opt_str):
    str_dict[item].append(index)
for opt in opts:
    a, b = opt.split()
    if a=="1":
        opt_str+=b
        str_dict[b].append(len(opt_str)-1)
    elif a=="2":
        b = int(b) -1
        case = opt_str[b]
        case_index = str_dict[case]
        cur_index = case_index.index(b)
        pre_index = case_index[cur_index-1] if (cur_index-1) >=0 else None
        next_index = case_index[cur_index+1] if (cur_index+1) < len(case_index) else None
        pre = b -pre_index if pre_index is not None else None
        _next = next_index -b if next_index else None
        if not pre and  not _next:
            print(-1)
        elif not pre:
            print(_next)
        elif not _next:
            print(pre)
        else:
            min = pre if pre < _next else _next
            print(min)