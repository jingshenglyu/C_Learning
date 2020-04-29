// 6_20 vector.cpp

#include<iostream>
#include<vector>
using namespace std;

// Calculate the average value
double average(const vector<double> &arr)
{
    double sum = 0;
    for (unsigned i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum/arr.size();
    
}

int main()
{
    unsigned n;
    cout << "n = " ;
    cin  >> n;

    vector<double>arr(n);   // create an array obj.
    cout << "Please input " << n << " real numbers: " << endl;
    for (unsigned i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Average = " << average(arr) << endl;
    return 0;
     
}