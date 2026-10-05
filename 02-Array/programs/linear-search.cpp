#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    int target = 30;
    bool found = false;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}