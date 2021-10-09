#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
//accout class create
class account
{
private:
    int balance{333333333};
    string name{};

public:
    //mathodes
    bool set_balance(int balanc)
    {

        balance += balanc;
        return true;
    }
    bool set_name(string x)
    {
        name = x;
        return true;
    }
    bool withdrow(int balanc)
    {
        if (balanc < balance)
        {
            balance -= balanc;
            return true;
        }
        else
        {
            return false;
        }
    }
    void acco(); //out side funtion
};
void account::acco()
{
    cout << "name = " << name << endl;
    cout << "balace = " << balance << endl;
}

int main()
{
    account robin;
    int first_input;
    cout << "what you want> /n 1) check your accout /n 2) diposit /n 3) withdrow" << endl;
    cin >> first_input;

    switch (first_input)
    {
    case 1:
        robin.acco();
        break;
    case 2:
        break;
    case 3:cout<<"how much you wanna withdrow ?"<<endl;
    int ammaunt;
    cin>>ammaunt;
    if(robin.withdrow(ammaunt)){
        cout<<"here your "<<ammaunt<<"$"<<endl;
    }
    else{
        cout<<"not sufficient funds"<<endl;
    }
        break;
    default:
        break;
    }
    return 0;
}