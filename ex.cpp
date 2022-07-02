#include "cmath"
#include "iostream"

using namespace std;

int main() {
  long long n;
  cin >> n;
  int arr[2] = {0};
  n = pow(5, n);

  arr[0] = n % 10;
  n = n / 10;
  arr[1] = n % 10;

  int result = arr[0] + (arr[1] * 10);

  cout << result;

  return 0;
}