#include <iostream>
#include <math.h>
using namespace std;
void pyth(int a, int b, int c)
{
  int h;
  h = max(a, max(b, c));
  if ((2 * pow(h, 2)) == (pow(a, 2) + pow(b, 2) + pow(c, 2)))
    cout << "the given numbers forms a pythagorian triplet";
  else
    cout << "the given numbers dont form a pythagorian triplet";
}
int main()
{
  int a, b, c;
  cout << "enter the three numbers to be printed";
  cin >> a >> b >> c;
  pyth(a, b, c);
  return 0;
}