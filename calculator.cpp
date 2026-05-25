#include <iostream>
using namespace std;
int main(){
    double num1, num2 , result ;
    char op;
    cout<<"enter 1st number- ";
    cin>>num1;
    cout<<"enter the operator (+,-,*,/)";
    cin>>op;
    cout<<"enter 2nd number- ";
    cin>>num2;
    if(op=='+'){
     result = num1 + num2 ;
    cout<<"result = "<<result<<endl;
    }
    else if(op=='-'){
        result=num1-num2;
        cout<<"result = "<<result<<endl;
    }
    else if(op=='*'){
        result=num1*num2;
        cout<<"result = "<<result<<endl;
    }
    else if(op=='/'){
        if(num2!=0){
         result=num1/num2;
         cout<<"result = "<<result<<endl;
     } else{
            cout<<"cant divide by 0 \n error "<<endl;
            return 0;
        }
    }
     else{
            cout<<"enter a valid operator ";
        }
        
    int y;
    cin>>y;
    int d;
    cin>>d;
    }