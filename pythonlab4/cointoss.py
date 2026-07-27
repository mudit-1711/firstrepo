import random as rd 
def f(n):
    h=t=0
    for i in range(n):
        x= rd.getrandbits(1)
        if x==0:
            h+=1
        else:
            t+=1
    return (h/n,t/n)
head=[]
tail=[]
for i in [5,10,50,100,500,1000]:
    x=f(i)
    head.append(x[0])
    tail.append(x[1])
print("head",head)
print("tail",tail)    

 
