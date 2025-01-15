// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if (n == 0)
//     {
//         cout << "Plese enter the real number to show the, Febonacci number";
//     };

//     if (n != 0)
//     {
//         cout << "Fibonacci Series: ";
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         // Prints the first two terms.
//         if (i == 1)
//         {
//             cout << t1 << ", ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         cout << nextTerm << ", ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Function to print Fibonacci series up to n terms
// void printFibonacci(int n)
// {
//     int t1 = 0, t2 = 1, nextTerm;

//     if (n == 0)
//     {
//         cout << "plese enter the valid real numer to show the febo. series!";
//     }
//     // Print the first two terms
//     if (n != 0)
//     {
//         cout << "Fibonacci Series up to " << n << "trems :";
//     }

//     // Print the remaining terms
//     for (int i = 1; i <= n; ++i)
//     {
//         if (i == 1)
//         {
//             cout << t1 << ", ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         cout << nextTerm << ", ";
//     }
//      cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     printFibonacci(n);
//     return 0;
// }

#include <iostream>
using namespace std;
void printfiboSeries(int n)
{
    int t1 = 0, t2 = 1, nextvalue;

    if (n <= 0)
    {
        cout << "plese enter the valid real number to show the fibo series1";
        return;
    }

    if (n != 0)
    {
        cout << "Fibo series up to" << n << ":";
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1<<", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2<<", ";
            continue;
        }
         nextvalue = t1 + t2;
     cout << nextvalue << " ";
    t1 = t2;
    t2 = nextvalue;
    }
   

}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    printfiboSeries(n);
    return 0;
}