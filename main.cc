#include <iostream>
#include <vector>

void modernize_loop() {
  std::vector<int> items;
  for (int & item : items) {
    std::cout << item << std::endl;
  }
}

int main(int argc, char* argv[]) {
  (void)argc;
  (void)argv;
  return 0;
}
