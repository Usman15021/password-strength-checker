#include <iostream>
using namespace std;
string checkPassword(string password, int size)
{
  bool hasLower = false, hasUpper = false, hasDigit = false;
  // check for the least one lowercase, one uppercase and one digit
  for (int i = 0; i < size; i++)
  {
    if (islower(password[i]))
      hasLower = true;
    if (isupper(password[i]))
      hasUpper = true;
    if (isdigit(password[i]))
      hasDigit = true;
  }
  // Check if the password meet the basix requirements
  if (size < 8 || !hasLower || !hasUpper || !hasDigit)
    return "Password does not meetthe requirements....";
  // determine the strenght of password
  if (size < 10)
    return "Password is weak.";
  if (size < 15)
    return "Password is strong!";
  if (size > 16)
    return "Password is very strong!";
}
int main()
{
  string password;
  cout << "Enter your password" << endl;
  cin >> password;

  int size = password.size(); // get the size of password
  string result = checkPassword(password, size);
  cout << result << endl;

  return 0;
}