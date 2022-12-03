#include <iostream>

int search(int arr[], int n, int x, int result[])
{
    int l = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            result[a] = i;
            l++;
        }
    }
    return l;
}

int main()
{
    int a[15] = {99 72 88 55 33 73 83 10 55 90 25 83 46 96 71};
    const int asize = sizeof(a) / sizeof(a[0]);
    int result[asize];
    for (int i = 0; i < asize; ++i)
    {
        result[i] = 0;
    }
    std::cout << "Число: " << search(a, asize, 71, result) << std::endl << "id: " << std::endl;
    for (int i = 0; i < asize; ++i)
    {
        std::cout << result[i] << std::endl;
    }
}