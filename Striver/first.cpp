#include <iostream>
using namespace std;
int main()
{

    // cout<<"hyy Nitish"<<endl;
    // cout<<"hyy Nitish"<<endl;
    // cout<<"kya haal hai"<<endl;

    // --  input & output --------------------------------
    // int a,b;
    // cin>>a>>b;
    // cout<<"the value of input a:"<<a<<endl<<"the value of input b:"<<b<<endl;

    // -- data types --------------------------------
    // int x = 10; //int have 4 bytes of memory and range is [2^31 to 2^31-1]
    // cout<<"the value of x is:"<<x<<endl;

    // long long a = 70000000000; //long long have 8 bytes of memory and range is [2^63 to 2^63-1]
    // cout<<"the value of a is:"<<a<<endl;

    // short int b = 8; //short int have 2 bytes of memory and range is [-2^15 to 2^15-1]
    // cout<<"the value of b is:"<<b<<endl;

    // float c = 3.14; //float have 4 bytes of memory and range is [3.4e-38 to 3.4e+38]
    // cout<<"the value of c is:"<<c<<endl;

    // double d = 3.141; //double have 8 bytes of memory and range is [1.7e-308 to 1.7e+308]
    // cout<<"the value of d is:"<<d<<endl;

    // char e = 'a'; //char have 1 byte of memory and range is [0 to 1.7e-308]
    // cout<<"the value of e is:"<<e<<endl;

    // bool f = 0; //bool have 1 byte of memory and range is [0 to 1]
    // cout<<"the value of f is[true:1, false:0]:"<<f<<endl;

    // string f = " have 1 byte of memory and range is [0 to 1 "<<range<< "] "

    // string str;
    // cin>>str;
    // cout<<"the value of str is:"<<str<<endl;
    // input: hyy naman
    // output: the value of str is:hyy
    // -- string is taken his first vlaue of the value of str is the string that    will be inserted by the user in the output file with the value of str inserted by the user.
    //-- string me jbb hum koie input dete hai or beech me space dete hai then woo space se pahle wala value hee stre karta hai apne ek variable me

    // string str1, str2;
    // cin>>str1>>str2;
    // cout<<"the value of string is:"<<str1 <<" "<<str2<<endl;
    // -- hame iske liye har ek string ke liye ek alag variable dena padega jisse ki hum uske value ko store kar sake.
    // but this is very complex so we use getline() function to take the whole string in one variable.
    // getline(cin, str1);

    // string str;
    // getline(cin,str);
    // cout<<"The value of string is"<<str <<endl;

    // char h = 'a';
    // string str = "string";
    // cout<<"The value of string is"<<str<<endl;
    // cout<<"The value of char is"<<h<<endl;

    // -- if, else, else if --------------------------------

    // do the problem
    // if stdent score in exam 100 then print "perfect"
    // if student score in exam 90 to 99 then print "excellent"
    // if student score in exam 80 to 89 then print "good"
    // if student score in exam 70 to 79 then print "fair"
    // if student score in exam 60 to 69 then print "meets expectations"
    // if student score in exam 50 to 59 then print "below expectations"
    // if student score in exam 0 to 49 then print "unsatisfactory"
    // else print "invalid score"
    // // input: 90

    // int studentScore;
    // cin >> studentScore;
    // if (studentScore == 100)
    // {
    //     cout << "perfect" << endl;
    // }
    // else if (studentScore == 90 || studentScore == 99)
    // {
    //     cout << "excellent" << endl;
    // }
    // else if (studentScore >= 80 && studentScore <= 89)
    // {
    //     cout << "good" << endl;
    // }
    // else if (studentScore >= 70 && studentScore <= 79)
    // {
    //     cout << "fair" << endl;
    // }
    // else if (studentScore >= 60 && studentScore <= 69)
    // {
    //     cout << "meets expectations" << endl;
    // }
    // else if (studentScore >= 50 && studentScore <= 59)
    // {
    //     cout << "below expectations" << endl;
    // }
    // else if (studentScore >= 0 && studentScore <= 49)
    // {
    //     cout << "unsatisfactory" << endl;
    // }
    // else
    // {
    //     cout << "invalid score" << endl;
    // }

    //-- switch --------------------------------

    // int day ;
    // cin >> day;
    // switch(day)
    // {
    //     case 1:
    //     cout << "monday" << endl;
    //     break;
    //     case 2:
    //     cout << "tuesday" << endl;
    //     break;
    //     case 3:
    //     cout << "wednesday" << endl;
    //     break;
    //     case 4:
    //     cout << "thursday" << endl;
    //     break;
    //     case 5:
    //     cout<< "friday" << endl;
    //     break;
    //     case 6:
    //     cout<< "saturday" << endl;
    //     break;
    //     case 7:
    //     cout<< "sunday" << endl;
    //     break;
    //     default : cout<<"invalid day number"<<endl;
    // }
    return 0;
}