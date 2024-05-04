#include <iostream>
#include <vector>
using namespace std;

int merge(int arr1[], int m, int arr2[], int n, int arr3[])
{

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else if (arr1[i] > arr2[j])
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy remaining elements of arr1
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    // copy remaining elements of arr2
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[5] = {4, 5, 7, 8,9};
    int arr2[3] = {1, 2, 3};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}
