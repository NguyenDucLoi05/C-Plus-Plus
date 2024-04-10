#include <iostream>
using namespace std;

int main()
{
  int n, m, dem(0);
  cout << "Hay nhap so nguyen n: ";
  cin >> n;
  while (n <= 0)
  {
    cout << "Nhap sai. Hay nhap lai so n: ";
    cin >> n;
  }

  for (int i = 2; i < n; i++)
  {
    for (int j = 2; j <= i; j++)
    {
      if (i % j == 0)
        dem++;
    }
    {
      if (dem == 1)
        m = i;
      cout << "So nguyen to dau tien cua " << n << ": " << m;
      break;
    }
  }
  return 0;
}