#include <memory>
#include <string>
#include <utility>

class PipeLine {
 public:
  PipeLine(std::string  cmds) : cmd_lines_(std::move(cmds)) {}
  ~PipeLine() = default;

 private:
  std::string cmd_lines_;
};

template <typename... Types>
void maybe_unused(Types...) {}

void test_make_shared() {
  auto cmd_lines = std::make_shared<PipeLine>("ls");
  maybe_unused(cmd_lines);
}

int main(int argc, char* argv[]) {
  maybe_unused(argc, argv);
  return 0;
}
