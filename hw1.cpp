#include <iostream>
using namespace std;

int main()
{
  cout << "Hello, please input a number between 0 and 6." << endl;
  int num;
  cin >> num;
  switch(num)
    {
    case 0:
      cout << "Monday" << endl;
      return 0;
    case 1:
      cout << "Tuesday" << endl;
      return 0;
    case 2:
      cout << "Wednesday" << endl;
      return 0;
    case 3:
      cout << "Thursday" << endl;
      return 0;
    case 4:
      cout << "Friday" << endl;
      return 0;
    case 5:
      cout << "Saturday" << endl;
      return 0;
    case 6:
      cout << "Sunday" << endl;
      return 0;
    default:
      cout << "Invalid Value!" << endl;
      return 1;
  }
}
