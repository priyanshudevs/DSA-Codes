// this pointer

#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_balance;
    int acc_number;

    Customer(){
        name = "Priyanshu";
        acc_balance = 1000;
        acc_number = 123;
    }

    Customer(string name, int acc_balance, int acc_number){
        this->name = name;
        this->acc_balance = acc_balance;
        this->acc_number = acc_number;
    }

    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){

    Customer A1;
    Customer A2("Aman", 1000, 145);

    A1.display();
    A2.display();

}