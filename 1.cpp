#include <iostream>

int main() {
  int a;
  std::cin >> a;
  a += ((a + 1) % 2) + 1;
  std::cout << a;
}
