#include <iostream>
using namespace std;

int is_Sorted(int *arr, int size)
{
    // base cases
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    // increasing the starting position hence reducing th size
    else
    {
        bool remaining = is_Sorted(arr + 1, size - 1);
        return remaining;
    }
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // Function calling
    bool ans = is_Sorted(arr, n);

    if (ans)
        cout << endl
             << "Sorted array !!!!" << endl
             << endl
             << endl;

    return 0;
}