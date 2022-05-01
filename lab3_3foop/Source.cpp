//Source.cpp

#include "AccountPr.hpp"
#include "Account.hpp"
#include "Money.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Account a;
    a.Init("john", 0101, 1.5);
    a.Money::Init(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Money b(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    a.Display();
    a.Dollar();
    a.Display();
    
    AccountPr c;
    c.Init("bill", 0102, 1.3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    c.Display();
    c.Withdraw(b);
    c.Display();
    
    
    
    return 0;
}
