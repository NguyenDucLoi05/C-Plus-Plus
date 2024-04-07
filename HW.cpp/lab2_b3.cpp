#include <iostream>
using namespace std;

int main()
{
  int n, sum(0);
  cout << "Hay nhap n: " << endl;
  cin >> n;

  do
  {
    for (int i = 0; i <= n; i++)
    {
      if (i % 2 != 0)
      {
        sum += i;
      }
    }
    cout << sum;
    break;
  } while (n > 0);
  return 0;
}