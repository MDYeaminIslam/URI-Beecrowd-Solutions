#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"What do you want to eat?" << endl;
    string food1;
    getline(cin,food1);
    cout<<"What do you want to drink?"<<endl;
    string food2;
    getline(cin,food2);
    cout<<"What is price of the food"<<endl;
    double price1;
    cin >> price1;
    cout<< "What is the price of the drink?" <<endl;
    double price2;
    cin >> price2;
    cout<<"What is the tip that you want to leave?" << endl;
    double tip;
    cin >> tip;
    double totalPrice = price1+price2+tip*(price1+price2);
    cout<<"Your order is  "<< food1 << " and " << food2 << " as  a drink "<< " the total price of your order with the tip is"<< totalPrice
    << " dollars !"<<endl;

    return 0;
}

