#include<iostream>
using namespace std;

int main()
{
    cout<<"This is the money calculator"<<endl;
    cout<<"This will predict how much money you have"<<endl;
    system("pause");

    double pennies;
    double dimes;
    double nickles;
    double quarters;
    double dollar_coins;
    double dollar_bills;
    double five_bills;
    double ten_bills;
    double twenty_bills;
    double fifty_bills;
    double hundred_bills;
    double dcv = 1;
    double dbv = 1;
    double fbv = 5;
    double tbv = 10;
    double twbv = 20;
    double ffbv = 50;
    double hbv = 100;
    double pen_val = 0.01;
    double dim_val = .1;
    double nic_val = 0.05;
    double quart_val = 0.25;

    cout<<"Input the number of pennies you have"<<endl;
    cin>>pennies;
    cout<<"Input the number of nickels you have"<<endl;
    cin>>nickles;
    cout<<"Input the number of dimes you have"<<endl;
    cin>>dimes;
    cout<<"Input the number of quarters you have"<<endl;
    cin>>quarters;
    cout<<"Input the number of dollar coins you have"<<endl;
    cin>>dollar_coins;
    cout<<"Input the number of dollar bills you have"<<endl;
    cin>>dollar_bills;
    cout<<"Input the number of 5 dollar bills you have"<<endl;
    cin>>five_bills;
    cout<<"Input the number of 10 dollar bills you have"<<endl;
    cin>>ten_bills;
    cout<<"Input the number of 20 dollar bills you have"<<endl;
    cin>>twenty_bills;
    cout<<"Input the number of 50 dollar bills you have"<<endl;
    cin>>fifty_bills;
    cout<<"Enter the number of 100 dollar bills you have"<<endl;
    cin>>hundred_bills;


    cout<<"You have "<<pennies*pen_val<<"$ in pennies"<<endl;
    cout<<"You have "<<nickles*nic_val<<"$ in nickels"<<endl;
    cout<<"You have "<<dimes*dim_val<<"$ in dimes"<<endl;
    cout<<"You have "<<quarters*quart_val<<"$ in quarters"<<endl;
    cout<<"You have "<<dollar_coins*dcv<<"$ in dollar coins"<<endl;
    cout<<"You have "<<dollar_bills*dbv<<"$ in dollar bills"<<endl;
    cout<<"You have "<<five_bills*fbv<<"$ in 5 dollar bills"<<endl;
    cout<<"You have "<<ten_bills*tbv<<"$ in 10 dollar bills"<<endl;
    cout<<"You have "<<twenty_bills*twbv<<"$ in 20 dollar bills"<<endl;
    cout<<"You have "<<fifty_bills*ffbv<<"$ in 50 dollar bills"<<endl;
    cout<<"You have "<<hundred_bills*hbv<<"$ in 100 dollar bills"<<endl;\
    cout<<"In total, you have"<<endl;
    cout<<pennies*pen_val+nickles*nic_val+dimes*dim_val+quarters*quart_val+dollar_coins*dcv+dollar_bills*dbv+five_bills*fbv+ten_bills*tbv+twenty_bills*twbv+
    fifty_bills*ffbv+hundred_bills*hbv<<"$"<<endl;

    cout<<"Thanks!"<<endl;
    system("pause");
