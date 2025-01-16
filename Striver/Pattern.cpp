// pattern login
// firt we analized outer row for first loop;
// for colum
// the printing

// * * * *           
// * * * *
// * * * *
// * * * *

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

int main()
{
    int runtime;
    cin >> runtime;
    for (int i = 0; i < runtime; i++)
    {
        int input;
        cin >> input;
        // pattern1(input);
        pattern2(input);
    }

    return 0;
}



// #include <iostream>
// using namespace std;
// void pattern(int input){
//   for(int i=0;i<input;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int input;
//     cin>>input;
//     pattern(input);
//     return 0;
// }