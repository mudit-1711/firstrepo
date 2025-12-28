#include <bits/stdc++.h>
using namespace std;
int main(){
   int marks;
   cout<<"Enter your marks out of 100 - ";
   cin>> marks;

   if((marks<0)||(marks>100)){
    cout<<"your input is invalid "<<endl<< " try agin - ";
   } 
   while((marks<0)||(marks>100)){
    cin>>marks ;
   }
    if (marks>=90){
        cout<<"your grade is A ";
    }else if(marks>=80){
        cout<<"your grade is B";
    }else if (marks>=70){
        cout<<"your grade is C ";
    }else if(marks>=60){
     cout<<"your grade is D";
    }else{
        cout<<"you are fail ";
    } 
    return 0;
}