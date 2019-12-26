#include <iostream>
using std::cout;
using std::endl;
class Account {
private:
    double balance;
public:
    Account () {
        balance = 0.0;
    }
    Account (double balance_) {
        balance = balance_;
    }
    void deposit(double amount){
        balance += amount;
    }
    double withdraw(double amount) {
        auto temp {0.0};
        if (balance < amount) {
            temp = balance;
            balance = 0;
            return temp;
        } else {
            balance -= amount;
            return amount;
        }
    }
};

int main(){
    Account a1;
    Account a2 = Account(100.0);
    a1.deposit(9.0);
    cout<<a1.withdraw(10.0)<<endl;
    cout<<a2.withdraw(52.0)<<endl;
    cout<<Account(200.0).withdraw(300.0)<<endl;
    return 0;
}
