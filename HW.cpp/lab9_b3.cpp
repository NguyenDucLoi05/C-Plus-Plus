#include <iostream>
using namespace std;

int main()
{
  int N, sum(0);
  cout << "Hay nhap so nguyen duong N: ";
  cin >> N;

  for (int i = 1; i <= N; i++)
    if (N % i == 0)
    {
      sum += 1;
    }
      cout << "so uoc so cua " << N << " la: " << sum;
  return 0;
}