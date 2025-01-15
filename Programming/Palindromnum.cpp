#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    if(temp == reverse){
        cout<<"The number is Palindrom";
    }
    else{
        cout<<"The number is not Palindrom";
    }
    return 0;
}