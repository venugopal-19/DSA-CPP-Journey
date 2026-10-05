#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "Before clear: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    arr.clear();

    cout << "Size after clear: " << arr.size() << endl;

    if(arr.empty())
    {
        cout << "Vector is empty." << endl;
    }

    return 0;
}