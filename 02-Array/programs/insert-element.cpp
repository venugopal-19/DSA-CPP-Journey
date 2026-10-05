#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    int position = 2;
    int value = 25;

    arr.insert(arr.begin() + position, value);

    cout << "Array after insertion: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}