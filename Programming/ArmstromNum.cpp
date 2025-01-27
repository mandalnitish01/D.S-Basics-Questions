#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int duplicate = n;
    int sum =0;
    int sum2 = 0;
    int sum3 = 0;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        sum2 = sum2 + (ld*ld*ld*ld);
        sum3 = sum3 + (ld*ld*ld*ld*ld);
        n = n/10;
    }
    if(sum == duplicate){

        cout<<"The number is Armstrong number"<<endl;
    }
    else if(sum2  == duplicate){
        cout<<"The number is Armstrong number"<<endl;
    }
    else if(sum3 == duplicate){
        cout<<"The number is Armstrong number"<<endl;
    }
    else{
        cout<<"The number is not Armstrong number"<<endl;
    }
    return 0;
}

// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.