#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30};

    cout << "Original vector: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Add an element
    arr.push_back(40);

    cout << "After push_back(40): ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Remove the last element
    arr.pop_back();

    cout << "After pop_back(): ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Display size
    cout << "Size of vector: " << arr.size() << endl;

    // Check if vector is empty
    if(arr.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}