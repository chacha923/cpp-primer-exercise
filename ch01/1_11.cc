#include <iostream>

using std::cin;
using std::cout;

void print_range(int lo, int hi) {
  if (lo > hi) {
    print_range(hi, lo);
    return;
  }
  for (int i = lo; i != hi; ++i) {
    cout << i << " ";
  }
}
int main() {
  int low = 0, high = 0;
  cout << "please input two integers:\n";
  cin >> low >> high;
  print_range(low, high);
  return 0;
}