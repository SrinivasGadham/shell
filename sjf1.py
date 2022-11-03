gt=[]
ct=0
def calculation(p,i):
    global gt
    global ct
    a,bt=insertqueue(p,i)
    ct+=bt
    gt.append([a[0],ct])
    p.remove(a)
    if len(p)==0:
        return gt
    calculation(p,ct)
def insertqueue(x,i):
    q=[]
    for j in x:
        if j[1]<=i:
            q.append(j)
    q.sort(key=lambda x:x[2])
    return q[0],q[0][2]
p=[[1,2,6],[2,5,2],[3,1,8],[4,0,3],[5,4,4]]
calculation(p,0)
print(gt)