#include <iostream>
using namespace std;

int main()
{
  int n;
  do
  {
    cout << "Hay nhap so n: ";
    cin >> n;
  } while (n <= 2 || n >= 100);
  cout << "Cac so nguyen to la: " << endl;
  for (int i = 2; i < n; i++)
  {
    bool m = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        m = false;
        break;
      }
    }
      if (m)
        cout << i << " ";
  }
  cout << endl;
  return 0;
}