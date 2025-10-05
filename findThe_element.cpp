#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    bool found = false;

    cout << "Enter 5 numbers: ";

    for (int j = 0; j < 5; j++)
    {
        cin >> arr[j];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 20)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "The element 20 is present." << endl;
    }
    else
    {
        cout << "The element 20 is not present." << endl;
    }

    return 0;
}