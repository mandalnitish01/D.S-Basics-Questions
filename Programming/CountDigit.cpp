#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0;
    
    while(n>0){
        int lastdigit = n%10;
        cout<<lastdigit;
        digit = digit+1;
        n = n/10;
        // digit = digit+1;
    }//Time complexity is O(log10(n))
    // when we apply division operation in the code then the TC is done in the log10 form.
    cout<<endl;
    
    cout<<"THE TOTAL number of digit you are given:"<<digit;
    // it will give the total number of digit in the each given number.
    cout<<endl;
    return 0;
}