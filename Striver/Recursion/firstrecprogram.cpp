#include<iostream>
using namespace std;

void addfun(int n1, int n2){
    int sum = 0;
    sum = n1 + n2;
    cout<<"sum = "<<sum<<endl;


}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    addfun(n1,n2);
    return 0;
}