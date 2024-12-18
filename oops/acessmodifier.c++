// #include <bits/stdc++.h>
// using namespace std;
// class strategy
// {
// protected:
//     double qty;

// public:
//     double price;
//     void printmulty()
//     {
//         int x;
//         qty = 5;
//         x = qty * price;
//         cout << qty << endl;
//         cout << "result of this " << x;
//     }
// };
// int main()
// {
//     // accessing the public modifier
//     strategy s1;
//     // s1.qty = 20;
//     s1.price = 2;
//     s1.printmulty();
//     return 0;
// }
// ===============Assignment1==============
#include <bits/stdc++.h>
using namespace std;
class strategy
{
private:
    int order_qty;
    int limit_price;
    int account_id;
    string account_name;

public:
    // here the strategy which i created is constructor
    strategy()
    {
        order_qty = 10;
        limit_price = 200;
        account_id = 32;
        account_name = "abhishek kumar singh ";
    }
    void printdata()
    {

        cout << "order_qty = " << order_qty << endl;
        cout << "limit_price = " << limit_price << endl;
        cout << "account id = " << account_id << endl;
        cout << "Account name = " << account_name << endl;
    }
};

int main()
{

    strategy obj1;

    obj1.printdata();
    return 0;
}