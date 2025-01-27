#include <iostream>
using namespace std;
int main()
{
    int userinput;
     
    cout << "Enter a number: ";
    cin>> userinput;
    cout<<endl;
    int fact = 1;
    for(int i=1;i<=userinput;i++){
        fact = fact * i;
    }
    cout<<"factorial = ";
    cout<<fact;
    cout<<endl;
    return 0;
}
// Factorial of a number is the product of all the integers from 1 to that number. For example, the factorial of 6 is 1*2*3*4*5*6 = 720.