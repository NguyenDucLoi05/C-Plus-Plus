#include <iostream>
using namespace std;

int main()
{
  int n, sum(0), tong(0);
  cout << "Hay nhap so n: " << endl;
  cin >> n;
  if (n > 0)
  {
    {
      for (int i = 0; i <= n; i++)
        sum += i;
    }
    cout << sum;
  }
  else
    cout << "Nhap sai hay nhap lai!" << endl;
  // cach khac
  do
  {
    {
      for (int j = 0; j <= n; j++)
        tong += j;
    }
    cout << tong;
    break;
  } while (n > 0);
  return 0;
}
