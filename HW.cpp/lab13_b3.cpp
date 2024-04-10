#include <iostream>
using namespace std;

int main()
{
  int n;
  do
  {
    cout << "Hay nhap so n:";
    cin >> n;
  } while (n <= 2 || n >= 100);
  cout << "Cac so nguyen to la: ";
  {
    int dem(0), m;
    for (int j = 2; j <= n; j++)
    {
      for (int i = 2; i <= j; i++)
      {
        if (j % i == 0)
        {
          dem++;
        }
        if (dem == 2)
          m = j;
        break;
      }
      cout << m << " ";
    }
    dem = 0;
  }

  return 0;
}