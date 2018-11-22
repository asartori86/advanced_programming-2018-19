#include <fstream>
#include <sstream>

int main() {
  std::string base_name{"file_"};
  for (auto i = 0; i < 10; ++i) {
    std::stringstream ss;
    ss << base_name << i << ".txt";
    std::ofstream f{ss.str()};
    f << i << std::endl;
  }

  return 0;
}
