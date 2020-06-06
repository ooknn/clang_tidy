#include <memory>
#include <string>
#include <utility>
int gnum = 10;
namespace OoknnEnum {
enum HelloWorld {
  khello,
  kworld,
};
}  // namespace OoknnEnum

struct Entity {
 private:
  [[nodiscard]] std::string GetName() const { return Name_; }

 private:
  std::string Name_;
  static const int kId = 0;
};

class CPipeLine {
 public:
  explicit CPipeLine(std::string cmds, std::string line = "")
      : CmdLines_(std::move(cmds)) {}
  ~CPipeLine() = default;

 private:
  [[nodiscard]] std::string Cmd(std::string line = "") const { return CmdLines_; }

 private:
  int*p_ = nullptr;
  std::string CmdLines_;
};

template <typename... Types>
void MaybeUnused(Types...) {}

void TestMakeShared() {
  auto cmd_lines = std::make_shared<CPipeLine>("ls");
  MaybeUnused(cmd_lines);
}

int main(int argc, char* argv[]) {
  MaybeUnused(argc, argv);
  return 0;
}
