#include<iostream>
#include<cmath>

using namespace std;
//Making a simple story.
int main()
{
    string name = "Yeamin";
    cout<< "Hello " << name << endl;
    int value1 = 2;
    int value2 = 12;
    cout << "You ate "<< min(value1,value2) <<" slices of pizza and it cost you" <<max(value1,value2)<<" dollars!"<<endl;
    string name2 = "run";
    int value3= 30;
    int value4= 400;
    int value5 = 500;
    cout << "You have also " << name2<< min(value3,value4) << " minutes,you have burned " << max(value3,value4) <<" calories."<<endl;
    cout <<"Your calories intake was of  "<< value5-value4 << " calories! "<<endl;
    return 0;
}

