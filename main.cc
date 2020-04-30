#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class pipe_line {
 public:
  std::vector<std::string> cmds;
};

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  pipe_line pl;
  pl.cmds.emplace_back("ls");
  pl.cmds.emplace_back("grep");
  pl.cmds.emplace_back("*.cc");
  std::for_each(pl.cmds.begin(), pl.cmds.end(),
                [](const auto &item) { std::cout << item << std::endl; });
  return 0;
}
