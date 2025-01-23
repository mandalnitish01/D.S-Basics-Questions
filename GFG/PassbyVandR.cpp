#include<iostream>
using namespace std;
int PassedBy(int a,int &b){
    int ans1 = a + 1;
    int ans2 = b +2;
  return  ans2;  // Modify the reference parameter b to reflect the change
    return ans1;  // Returning ans1
}
int main(){
    int a;
    int b;
cin>>a,b;
   int ans =  PassedBy(a,b);

cout<<"a:"<<a<<endl;
cout<<"b is (modified) :"<<b<<endl;
   cout << "ans (returned): " << ans << endl;
}
