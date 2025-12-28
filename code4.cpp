#include <iostream>
using namespace std ;
int main(){
        
    int a,b,c,d,e,max;
    cout<<"Enter the 5 numbers ";
    cin>>a>>b>>c>>d>>e;

    max=((a>b)? a:b);
    max=((c>max)? c :max);
     max=((d>max)? d :max);
    max=((e>max)? e:max);

    cout<<"maximum number is :- "<<max ;

    return 0;
}