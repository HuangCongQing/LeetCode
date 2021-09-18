# def iou(box1, box2):
#     """ 
#     box1:图像左上角坐标原点
#     box2:(y1,x1, y2,x2)
#     y1,x1: 左上
#     y2, x2:右下
#     """
#     in_h = min(box1[2], box2[2]) - max(box1[0], box2[0])
#     in_w = min(box1[3], box2[3]) - max(box1[1], box1[1])
#     # 交集
#     inter = 0 if in_h<0 or in_w<0 else in_h*in_w
#     if inter <=0:
#     # 并集
#     union = (box1[2] - box1[0] )*(box1[3] - box1[1] ) +  (box2[2] - box2[0] )*(box2[3] - box2[1] ) - inter
#     iou = inter/union
#     return iou

# 判断点P在旋转矩阵中
A,B，C, D(矩阵的四个点)
a.x,a.y
(ABxAP)*(CDxCP) >=0
# 
