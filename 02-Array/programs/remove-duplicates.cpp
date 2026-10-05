#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4};

    int j = 1;

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != arr[j - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}