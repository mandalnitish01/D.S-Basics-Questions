// -------------------------- Number Hashing --------------------------
#include <iostream>
using namespace std;
long main()
{
    cout << "Enter the number arrayt size: ";
    long n;
    cin >> n;
    long arr[n];
    cout << "Enter the array elements: ";
    for (long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //precomplete the array :- jitna size cahiyea wo hmm pahkle store kr lenge.
    long hash[13] = {0}; 
    for(long i=0;i<n;i++){
        hash[arr[i]]++;
    }

    //fetch the data from the hash array
    cout << "The frequency of the elements in the array is: " << endl;
    long q;
    cin >> q;
    while (q--)
    {
        long number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}

//---------------------------------- charecter hashing ----------------------------------