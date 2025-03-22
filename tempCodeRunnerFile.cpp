#include <iostream>

int main() {
  int numbers[9];

  std::cout << "Enter 9 numbers:" << std::endl;
  for (int i = 0; i < 9; i++) {
    std::cin >> numbers[i];
  }

  int sum = 0;
  for (int i = 0; i <9; i++) {
    sum += numbers[i];
  }

  std::cout << "The sum of the numbers is: " << sum << std::endl;

  return 0;
}
