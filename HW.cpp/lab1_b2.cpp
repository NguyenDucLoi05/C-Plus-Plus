#include <iostream>
using namespace std;

int main()
{
  int n, sum(0);
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
    cout << "Nhap sai hay nhap lai!";
  return 0;
}