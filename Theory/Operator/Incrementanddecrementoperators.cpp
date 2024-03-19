#include <iostream>
using namespace std;
int main()
{
  int num = 7;
  int Afterincrementoperator = num++;
  int Afterdecrementoperator = num--;
  cout<<"After increment operator: " << Afterincrementoperator << endl;
  cout<<", After decrement operator: "<< Afterdecrementoperator << endl;
  return 0;
}