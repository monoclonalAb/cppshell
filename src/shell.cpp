// copyright 2026 <eric zheng>

#include "shell.hpp"
#include <iostream>
#include <string>
#include <vector>

void repl_loop() {
  std::string line;
  std::vector<std::string> args;
  int status{};

  do {
    std::cout << "> ";
    // line = repl_read_line();
    // args = repl_split_line();
    // status = repl_execute(args);
  } while (status);

  return;
}
