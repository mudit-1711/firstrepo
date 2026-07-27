#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age-";
    cin>> age ;
    cout<<"your age is- " << age<<endl;
    return 0;
}
#sieve of erastosthenes
import math
p=[]
a=[]
for i in range(2,1001):
    a.append(i)
for i in a:
    ok = True
    for j in p:
        if i%j==0:
            ok = False
            break    
    if ok: 
        ok1=True
        for j in range(2,math.ceil(math.sqrt(i))):
            if i%j==0:
                ok1=False
                break    
        if ok1:
            p.append(i)        
print(p)
print(len(p))