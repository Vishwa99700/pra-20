
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout<< "Enter the number" <<endl;
    int a;
    cin>>a;
    if (a>0){
        cout << a<<"is a positive number";
}
        else if(a<0){
            cout << a<< "is a negative number";
        }
    else
        cout << "IT is Zero";
    return 0;
}
