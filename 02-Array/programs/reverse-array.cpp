#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    int start = 0;
    int end = arr.size() - 1;

    while(start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    cout << "Reversed array: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}