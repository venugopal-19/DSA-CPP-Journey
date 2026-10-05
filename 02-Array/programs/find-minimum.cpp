#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 25, 7, 42, 18};

    int minimum = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "Minimum element: " << minimum << endl;

    return 0;
}