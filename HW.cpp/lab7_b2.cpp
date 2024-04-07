#include <iostream>
using namespace std;

int main()
{
  int n;
  float sum(0);
  cout << "Hay nhap so n: " << endl;
  cin >> n;
  do
  {
    for (int i = 1; i <= n; i++)
    {
      sum += (float(i) /(1+i));
    }
    cout << "Tong S la: " << sum;
    break;
  } while (n > 0);
  return 0;
}