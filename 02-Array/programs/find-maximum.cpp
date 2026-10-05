#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 25, 7, 42, 18};

    int maximum = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;

    return 0;
}
