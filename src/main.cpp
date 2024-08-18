#include <fmt/core.h>

#include "myAdd.hpp"

int main(int argc, char *argv[]) {
  fmt::print("Hello, world!\n");
  const int x = 10;
  const int y = 20;
  const auto res = myAdd::myAdd(x, y);

  fmt::print("result: {}\n", res);

  return 0;
}
