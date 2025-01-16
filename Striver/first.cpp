// #include <iostream>
// using namespace std;
// int main()
// {

//     // cout<<"hyy Nitish"<<endl;
//     // cout<<"hyy Nitish"<<endl;
//     // cout<<"kya haal hai"<<endl;

//     // --  input & output --------------------------------
//     // int a,b;
//     // cin>>a>>b;
//     // cout<<"the value of input a:"<<a<<endl<<"the value of input b:"<<b<<endl;

//     // -- data types --------------------------------
//     // int x = 10; //int have 4 bytes of memory and range is [2^31 to 2^31-1]
//     // cout<<"the value of x is:"<<x<<endl;

//     // long long a = 70000000000; //long long have 8 bytes of memory and range is [2^63 to 2^63-1]
//     // cout<<"the value of a is:"<<a<<endl;

//     // short int b = 8; //short int have 2 bytes of memory and range is [-2^15 to 2^15-1]
//     // cout<<"the value of b is:"<<b<<endl;

//     // float c = 3.14; //float have 4 bytes of memory and range is [3.4e-38 to 3.4e+38]
//     // cout<<"the value of c is:"<<c<<endl;

//     // double d = 3.141; //double have 8 bytes of memory and range is [1.7e-308 to 1.7e+308]
//     // cout<<"the value of d is:"<<d<<endl;

//     // char e = 'a'; //char have 1 byte of memory and range is [0 to 1.7e-308]
//     // cout<<"the value of e is:"<<e<<endl;

//     // bool f = 0; //bool have 1 byte of memory and range is [0 to 1]
//     // cout<<"the value of f is[true:1, false:0]:"<<f<<endl;

//     // string f = " have 1 byte of memory and range is [0 to 1 "<<range<< "] "
//     // it read the charecter by charecter and store in the string variable.

//     // string str;
//     // cin>>str;
//     // cout<<"the value of str is:"<<str<<endl;
//     // input: hyy naman
//     // output: the value of str is:hyy
//     // -- string is taken his first vlaue of the value of str is the string that    will be inserted by the user in the output file with the value of str inserted by the user.
//     //-- string me jbb hum koie input dete hai or beech me space dete hai then woo space se pahle wala value hee stre karta hai apne ek variable me

//     // string str1, str2;
//     // cin>>str1>>str2;
//     // cout<<"the value of string is:"<<str1 <<" "<<str2<<endl;
//     // -- hame iske liye har ek string ke liye ek alag variable dena padega jisse ki hum uske value ko store kar sake.
//     // but this is very complex so we use getline() function to take the whole string in one variable.
//     // getline(cin, str1);

//     // string str;
//     // getline(cin,str);
//     // cout<<"The value of string is"<<str <<endl;

//     // char h = 'a';
//     // string str = "string";
//     // cout<<"The value of string is"<<str<<endl;
//     // cout<<"The value of char is"<<h<<endl;

//     // -- if, else, else if --------------------------------

//     // do the problem
//     // if stdent score in exam 100 then print "perfect"
//     // if student score in exam 90 to 99 then print "excellent"
//     // if student score in exam 80 to 89 then print "good"
//     // if student score in exam 70 to 79 then print "fair"
//     // if student score in exam 60 to 69 then print "meets expectations"
//     // if student score in exam 50 to 59 then print "below expectations"
//     // if student score in exam 0 to 49 then print "unsatisfactory"
//     // else print "invalid score"
//     // // input: 90

//     // int studentScore;
//     // cin >> studentScore;
//     // if (studentScore == 100)
//     // {
//     //     cout << "perfect" << endl;
//     // }
//     // else if (studentScore == 90 || studentScore == 99)
//     // {
//     //     cout << "excellent" << endl;
//     // }
//     // else if (studentScore >= 80 && studentScore <= 89)
//     // {
//     //     cout << "good" << endl;
//     // }
//     // else if (studentScore >= 70 && studentScore <= 79)
//     // {
//     //     cout << "fair" << endl;
//     // }
//     // else if (studentScore >= 60 && studentScore <= 69)
//     // {
//     //     cout << "meets expectations" << endl;
//     // }
//     // else if (studentScore >= 50 && studentScore <= 59)
//     // {
//     //     cout << "below expectations" << endl;
//     // }
//     // else if (studentScore >= 0 && studentScore <= 49)
//     // {
//     //     cout << "unsatisfactory" << endl;
//     // }
//     // else
//     // {
//     //     cout << "invalid score" << endl;
//     // }

//     //-- switch --------------------------------

//     // int day ;
//     // cin >> day;
//     // switch(day)
//     // {
//     //     case 1:
//     //     cout << "monday" << endl;
//     //     break;
//     //     case 2:
//     //     cout << "tuesday" << endl;
//     //     break;
//     //     case 3:
//     //     cout << "wednesday" << endl;
//     //     break;
//     //     case 4:
//     //     cout << "thursday" << endl;
//     //     break;
//     //     case 5:
//     //     cout<< "friday" << endl;
//     //     break;
//     //     case 6:
//     //     cout<< "saturday" << endl;
//     //     break;
//     //     case 7:
//     //     cout<< "sunday" << endl;
//     //     break;
//     //     default : cout<<"invalid day number"<<endl;
//     // }

//     //  -- Array ----------------------------------------------------------------
//     // -- element_type array_name [size]
//     // --int arr[5];
//     // -- Address of ith element = base + (i x size)
//     // int arr[5] = {1, 2, 3, 4, 5};
//     // cout << arr[0] << endl;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     // 2d array --------------------------------
//     // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     // // cout << arr[0][0] << endl;
//     // // cout << arr[0][1] << endl;
//     // // cout << arr[0][2] << endl;
//     // // cout << arr[1][0] << endl;
//     // // cout << arr[1][1] << endl;
//     // // cout << arr[1][2] << endl;
//     // // cout << arr[2][0] << endl;
//     // // cout << arr[2][1] << endl;
//     // // cout << arr[2][2] << endl;
//     // for(int i = 0; i < 3; i++)
//     // {
//     //     for(int j = 0; j < 3; j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // Print matrix  .............................................
//     // int row;
//     // int col;
//     // cin >> row >> col;
//     // int arr[row][col];
//     // cout << "enter the firstmatrix element" << endl;
//     // for (int i = 0; i < row; i++)
//     // {
//     //     for (int j = 0; j < col; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }
//     // cout << "The first matrix is " << endl;
//     // for (int i = 0; i < row; i++)
//     // {
//     //     for (int j = 0; j < col; j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // cout << "The second matrix element is " << endl;
//     // int arr1[row][col];
//     // for (int i = 0; i < row; i++)
//     // {
//     //     for (int j = 0; j < col; j++)
//     //     {
//     //         cin >> arr1[i][j];
//     //     }
//     // }
//     // cout << "The second matrix is " << endl;
//     // for (int i = 0; i < row; i++)
//     // {
//     //     for (int j = 0; j < col; j++)
//     //     {
//     //         cout << arr1[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // cout << "The sum of the matrix is " << endl;
//     // int sum[row][col];
//     // for (int i = 0; i < row; i++)
//     // {
//     //     for (int j=0;j<col; j++)
//     //     {
//     //         sum[i][j] = arr[i][j] + arr1[i][j];
//     //         cout<<sum[i][j]<<" ";
//     //     }
//     //     cout<<endl;

//     // }














//     // loops
//     // for loop --------------------------------------------------------------------
//     //     int num;
//     //     cout<<"Enter the number that you want to write the factorial:";
//     //     cin>>num;
//     //     int fact =1;
//     //     // syntax of for loop
//     //     // for(Data_Type initialization, Condition; Update(initialization));
//     //     for(int i=1;i<=num;i++)
//     //     {
//     //         fact = fact * i;
//     //     }
//     // cout<<"The factorial is "<< fact << endl;

//     // while loop
//     // syntax
//     // while(Condition){
//     //    Property
//     //     Updation
//     // }

//     // Switch case  ----------------------------------------------------------------

//     // string str = "Nitish";
//     // int length = str.size();
//     // cout<<str[length - 1]<<endl;
//     // string str(number,character);
//     // String contain in single '' coat and character contain in double "" coat. ----------------------------------------------------------------
//     // string str(6,'Nitish');
//     // cout<<str<<endl;
//     // output: hhhhhh

//     // loops ----------------------------------------------------------------
//     // int n;
//     // cin >> n;
//     // cout<<endl;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << i << endl;
//     // }
//     // cout<<i; i is not accessaable here, because it is the block level. 
//     // but here we are accessing i in outside of the scope of the for loop.


//     // while loop ----------------------------------------------------------------

//     // syntax 
//     // while(condition)
//     // {
//     //     // print 
//     //     // update the condition
//     // }

// // -- Do while loop ----------------------------------------------------------------
// // syntax
// // do{
// //     // print
// //     // update the condition
// // }
// // while(condition);


// // int i=1;
// // do {
// //     cout<<i<<endl;
// //     i++;
// // }
// // while(i<=10);


// // break and continue; ----------------------------------------------------------------
// // for (int i = 0; i < 10; i++) {
// //   if (i == 4) {
// //     break;
// //   }
// //   cout << i << endl;
// // } 
// // output: 0 1 2 3







// // functions 
// // -- function are set of code which perform something for you.
// // -- function are used to modularized code and make it reusable.
// // -- function are used for reusability the code 
// // there are 4 type's you can initilized functions
// // --void
// // --return
// // --parametrized_function
// // --non_parametrized_function



//     return 0;
// }


// #include <iostream>
// using namespace std;
// // void sum(int a, int b){
// //     int c = a + b;
// //     // return c; 
// //     //so void not return anything, it is the blocked scope.
// //     // if you are using void then you can't return anything.it may cause errors.
// //     cout << "The sum of a and b is " << c << endl;
// // }
// int sum(int a, int b)
//     {
//         return a+b; 
//         // if we are using inat for initialization the function then we need to return the value.

//         // cout<<"The sum of a and b is "<<a+b<<endl;
// //         if we will doing this then it will give the error.
// //         Exception has occurred.
// // Illegal instruction
//     }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     // sum(a,b);
//   int c =  sum(a,b);
//     cout << "The sum of a and b is " << c << endl;
//     // cout<<a<<" and " << b<<endl;
// }


// pass by value 

// #include<iostream>
// using namespace std;
// int callthefun(int a){
//     cout<<a<<endl; //10
//     a+=4; 
//     cout<<a<<endl; //14
//     a+=4;
//     cout<<a<<endl; //18
//     return 0;
// }
// int main(){
//     int a = 10;
//     callthefun(a);
//     cout<<a<<endl; //10
// }

#include<iostream>
using namespace std;
int passby(int a, int &b){
    return a+=1;
    return b+=2;
}
int main(){
    int a = 10;
    int b=5;
    passby(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}