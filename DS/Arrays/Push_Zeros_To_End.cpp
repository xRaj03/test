#include <iostream>

using namespace std;

void pushZerosToEnd(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            a[count++] = a[i];
    }
    while (count < n)
    {
        a[count++] = 0;
    }
}

int main()
{

    int a[] = {1, 2, 3, 0, 0, 4, 0, 5, 0};
    int n = sizeof(a) / sizeof(a[0]);

    pushZerosToEnd(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}