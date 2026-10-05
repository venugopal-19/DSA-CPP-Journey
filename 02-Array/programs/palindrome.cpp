#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};

    int start = 0;
    int end = arr.size() - 1;

    bool palindrome = true;

    while(start < end)
    {
        if(arr[start] != arr[end])
        {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(palindrome)
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}