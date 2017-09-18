#include <iostream>
using namespace std;

/*An Armstrong number of three digits is
an integer such that the sum of the cubes
 of its digits is equal to the number itself.
  For example,371 is an Armstrong number
  since 3**3 + 7**3 + 1**3 = 371.*/

int main()

{
  int origNum, num, digit, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " is an Armstrong number.";
  else
    cout << origNum << " is not an Armstrong number.";

  return 0;
}
