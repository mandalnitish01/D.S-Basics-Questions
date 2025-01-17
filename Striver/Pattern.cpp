// pattern login
// firt we analized outer row for first loop;
// for colum
// the printing

// * * * *           
// * * * *
// * * * *
// * * * *


// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * * * * 


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 


// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 






#include <iostream>
using namespace std;
void pattern1(int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int input){
  for(int i=0;i<input;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int input){
    for(int i=0;i<input;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int input){
    for(int i=0;i<input;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
} 
// void pattern5(int input){
//     for(int i=0;i<input;i++){
//         for(int j=input;j>=i+1;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
void pattern5_1(int input){
   for(int i=1;i<=input;i++){
        for(int j=0;j<input -i+1;j++){
            // solve using the formula [ input - i + 1 ]
            cout<<"* ";
        }
        cout<< endl;
    }
}
void pattern6(int input){
    for(int i=1;i<=input;i++){
        for(int j=0;j<input -i+1;j++){
            cout<< j +1 <<" ";
        }
        cout<< endl;
    }
}

int main()
{
    int runtime;
    cin >> runtime;
    for (int i = 0; i < runtime; i++)
    {
        int input;
        cin >> input;
        // pattern1(input);
        // pattern2(input);
        // pattern3(input);
        // pattern4(input);
        // pattern5(input);
        pattern5_1(input);
        // pattern6(input);
    }

    return 0;
}



