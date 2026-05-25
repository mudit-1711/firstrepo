#include <bits.std/c++.h>
using namespace std;
  class account{
    private:
    int accountnumber ;
    int balance;
    public:
    account( int accountnumber, int balance){
        this->accountnumber = accountnumber;
        this->balance = balance;
    }
    void deposit(int amount){
        balance += amount;
    }
    void display(){
        cout<<"accountnumber: "<<accountnumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
  };
  class savingsaccount:public account{
    private:
    int interestrate;
    public:
    savingsaccount( int accountnumber, int balance, int interestrate){
        this->accountnumber = accountnumber;
        this->balance = balance;
        this->interestrate = interestrate;
    }
    void display(){
        cout<<"accountnumber: "<<accountnumber<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"interestrate: "<<interestrate<<endl;
    }
  };
  class currentaccount:public account{
    private:
    int overdraftlimit;
    public:
    currentaccount( int accountnumber, int balance, int overdraftlimit){
        this->accountnumber = accountnumber;
        this->balance = balance;
        this->overdraftlimit = overdraftlimit;
    }
    void display(){
        cout<<"accountnumber: "<<accountnumber<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"overdraftlimit: "<<overdraftlimit<<endl;
    }
  };
int main(){
    account a(1,100);
    savingsaccount s(2,200,3);
    currentaccount c(3,300,4);
    a.display();
    s.display();
    c.display();
}