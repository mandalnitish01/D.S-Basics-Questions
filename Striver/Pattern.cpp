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


// 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1


//        *
//       ***
//      *****
//     *******
//    *********
//   ***********


// ***********
//  ********* 
//   *******  
//    *****   
//     ***    
//      *     


//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//   ***********
//    ********* 
//     *******  
//      *****   
//       ***    
//        * 


// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *


// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 
// 1 0 1 0 1 0 1 


// 1            1
// 12          21
// 123        321
// 1234      4321
// 12345    54321
// 123456  654321
// 12345677654321

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
void pattern2(int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern4(int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void pattern5(int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = input; j >= i + 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern5_1(int input)
{
    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < input - i + 1; j++)
        {
            // solve using the formula [ input - i + 1 ]
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int input)
{
    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < input - i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern7(int input)
{
    // outer loop for row
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input - i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < input - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // to sole this problem we have to use the formula [ 2 * i + 1 ] to calculate the number of star positions in each row and 
    // [ input - i + 1 ] to calculate the number of spaces in each row.
}
void pattern8(int input)
{

    for (int i = 0; i < input; i++)
    {
        // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // star
        for(int j=0;j<2*input- (2*i+1);j++)
        {
            cout<<"*";
        }

        // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
      // to sole this problem we have to use the formula [ 2*input- (2*i+1) ] to calculate the number of star positions in each row and 
    // [ j=0;j<i;j++] to calculate the number of spaces in each row.
}
void pattern9(int input){
    for(int i=0;i<=input*2-1;i++){
        int start = i;
        if(i > input)
        start = 2*input-i;
        for(int j=1;j<=start;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern10(int input){
    int start = 1;
    for(int i=0;i<input;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<< start << " ";
            start = 1-start;
        }
        cout<<endl;
    }
}
void pattern11(int input){
    int space = 2*(input-1);
    for(int i=1;i<=input;i++){
        // number 
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // space 
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        // number 
         for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
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
        // pattern5_1(input);
        // pattern6(input);
        // pattern7(input);
        // pattern8(input);
        // pattern9(input);
        // pattern10(input);
        pattern11(input);
        
    }

    return 0;
}
