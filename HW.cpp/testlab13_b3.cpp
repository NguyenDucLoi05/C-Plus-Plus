#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen n (n > 2 va n <= 100): ";
        cin >> n;
    } while (n <= 2 || n >= 100);

    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; ++i)
    {
        bool isPrime = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
