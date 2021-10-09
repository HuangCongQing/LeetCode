from copy import deepcopy
a,b, f,k = list(map(int, input().split()))

energy = deepcopy(b)
count = 0
time = 0
while(time<k):
    if time<k:
        dis_ = deepcopy(f)
        dis_r = 2*(a-dis_)
        for j in range(a):
            energy -=1
            dis_ -=1
            if(dis_==0 and energy<dis_r):
                count+=1
                energy = deepcopy(b)
            if(energy<0):
                count =-1
                break
        time+=1
    if time<k:
        dis_ = 2*deepcopy(f)
        dis_r = a - dis_
        for j in range(a):
            energy -=1
            dis_r -=1
            if(dis_r==0 and energy<dis_):
                count+=1
                energy = deepcopy(b)
            if(energy<0):
                count =-1
                break
        time+=1
if count ==-1:
    print(-1)
    exit()
else:
    print(count)