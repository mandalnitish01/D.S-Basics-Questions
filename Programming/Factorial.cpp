#include <iostream>
using namespace std;
int main()
{
    int userinput;
     int fact = 1;
    cout << "Enter a number: ";
    cin>> userinput;
    cout<<endl;
    for(int i=1;i<=userinput;i++){
        fact = fact * i;
    }
    cout<<"factorial =";
    cout<<fact;
    return 0;
}