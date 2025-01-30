// // 1. Print name 5 times usinr recursion 

// #include<iostream>
// using namespace std;
// // int count  = 0;
// void PrintNameFunCall(string name , int number)
// {
//     if(number == 0)
//     {
//         return;
//     }
//     cout<<name<<endl;
//     PrintNameFunCall(name , --number);
//     // count++;
// }
// int main()
// {
//     string name;
//     cout<<"Give the input string: ";
//     getline(cin,name);
//     cout<<endl;
//     int number;
//     cout<<"How much time you wanted to print this name : ";
//     cin>>number;
//     cout<<endl;
//     cout<<endl;
//     PrintNameFunCall(name, number);
//     return 0;
// }
// TC: O(n)

// // 2. Print the number from 1 to n using recursion

// #include<iostream>
// using namespace std;
// void functioncall(int i , int n){
    
//     if(i > n){
//         return;
//     }
//     cout<<i<<endl;
//     functioncall(i+1,n);

// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
// functioncall(1,n);
//     return 0;
// }


// 2. Print the number from n to 1 using recursion

// #include<iostream>
// using namespace std;
// void functioncall(int n , int i){
    
//     if(n == i){
//         return;
//     }
//     cout<<n<<endl;
//     functioncall(n-1,i);
    
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
// functioncall(n,0);
//     return 0;
// }

