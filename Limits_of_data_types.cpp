#include <iostream>
#include <climits> // Definition of INT_MIN, ...
using namespace std;
int main()
{
cout << endl << "Range of types int and unsigned int"
<< endl << endl;
cout << "Type Minimum Maximum"
<< endl
<< "--------------------------------------------"
<< endl;
cout << "int " << INT_MIN << " "
<< INT_MAX << endl;
cout << "unsigned int " << " 0 "
<< UINT_MAX << endl;
return 0;
}
