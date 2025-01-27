#include<iostream>
using namespace std;
void addfun2(int n1, int n2){
    int sum = 0;
    sum = n1 + n2;
    cout<<"sum = "<<sum<<endl;
}
void addfun(int n1, int n2){
    int sum = 0;
    sum = n1 + n2;
    cout<<"sum = "<<sum<<endl;
    addfun2(2, 4);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    addfun(n1,n2);
    return 0;
}

// output 
// 10
// 12
// sum = 22
// sum = 6