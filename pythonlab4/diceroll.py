import random as rd 
def f(n):
    one=two=three=four=five=six=0
    for i in range(n):
        x= rd.randint(1,6)
        if x==1:
            one+=1
        elif x==2:
            two+=1
        elif x==3:
            three+=1
        elif x==4:
            four+=1
        elif x==5:
            five+=1
        else:
            six+=1
    return (one/n,two/n,three/n,four/n,five/n,six/n)
one, two, three, four, five, six = [], [], [], [], [], []
for i in [5,10,50,100,500,1000]:
    x=f(i)
    one.append(x[0]) 
    two.append(x[1])
    three.append(x[2])
    four.append(x[3])
    five.append(x[4])
    six.append(x[5])
print(one)    
print(two)
print(three)
print(four)
print(five)
print(six)