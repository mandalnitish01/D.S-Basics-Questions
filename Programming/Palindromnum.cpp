// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int temp = n;
//     int reverse = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }
//     if(temp == reverse){
//         cout<<"The number is Palindrom";
//     }
//     else{
//         cout<<"The number is not Palindrom";
//     }
//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev = 0;
    while(n>0){
        int ls = n%10;
        rev = rev*10 + ls;
        n = n/10;
    }
    if(rev == temp){
        cout<<"The number is Palindrom"<<endl;
    }
    else{
        cout<<"The number is not Palindrom"<<endl;
    }
    return 0;
}