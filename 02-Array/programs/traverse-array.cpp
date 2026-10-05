#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "Array elements: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}