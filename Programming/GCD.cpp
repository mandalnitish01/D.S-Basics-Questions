#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int loopnumber = min(n1,n2);
    int gcd = 0;
    // [
    // second way 
    // for(int i= loopnumber; i>=1; i--){
    //     if(n1%i==0 && n2%i==0){
    //         cout<< "The gcd(greatest common divisor) of the number is : 20" <<i<<endl;
    //         break;
    //     }
    // }
    // ]
    
    // first way 
    for(int i=1; i<=loopnumber; i++){
        if(n1%i ==0 && n2%i ==0){
            gcd = i;
        }
    }
    cout<<"The gcd(greatest common divisor) of the number is "<<gcd<<endl;
    return 0;
}
