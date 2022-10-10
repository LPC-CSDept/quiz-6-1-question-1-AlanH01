#include <iostream>
#include <iomanip>
using namespace std;
void swapTwoValues(int n1, int n2)
{
  int temp;
  cout << "Enter the two values: ";
  cin >> n1 >> n2;
  cout << "Before the swap, value 1 = " << n1 << ", value 2 = " << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
  cout << "After swap, value one = " << n1 << ", value two = " << n2 << endl;
}
void swapTwoValues(float f1, float f2)
{
  int temp;
  cout << "Enter float number 1 and 2: ";
  cin >> f1 >> f2;
  cout << "Before swap, float number one = " << f1 << ", number two = " << f2 << endl;
  temp = f1;
  f1 = f2;
  f2 = temp;
cout << "After swap, float number 1 = " << f1 << ", number 2 = " << f2 << endl;  
}
int main()
{
  int n1, n2;
  float f1, f2;
  swapTwoValues(n1, n2);
  swapTwoValues(f1, f2);
  return 0;
}