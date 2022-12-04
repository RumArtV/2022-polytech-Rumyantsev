#include <iostream>

int search(int arr[], int x, int y, int key)
{
    int m;
    bool flag = false;
    while ((l <= r) && (flag != true)) {
        m = (l + r) / 2;

        if (arr[m] == key) flag = true;
        if (arr[m] > key) r = m - 1;
        else l = m + 1;
    }
    return m;
}

int main()
{
    int a[15] = {99, 72, 88, 55, 33, 73, 83, 10, 55, 90, 25, 83, 46, 96, 71};
    const int asize = sizeof(a) / sizeof(a[0]);
    std::cout << "Индекс: " << search(a, 0, asize, 55) << std::endl;
}