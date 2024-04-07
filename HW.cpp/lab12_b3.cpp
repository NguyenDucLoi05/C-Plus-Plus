#include <iostream>
using namespace std;

int main()
{
  int n, m(0);
  cout << "Hay nhap so n: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      m++;
  }
    if (m == 2)
      cout << n << " La so nguyen to!";
    else
      cout << n << " Khong la so nguyen to!";
  return 0;
}