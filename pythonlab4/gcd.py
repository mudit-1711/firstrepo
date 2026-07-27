a=int(input("enter a number"))
b=int(input("enter a number")) 
temp=0
while b!=0:# b->rem
    temp=b
    b=a%b
    a=temp
print("the gcd is ",a)    