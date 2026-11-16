// copyright 2026 <eric zheng>

#include "shell.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

void repl_loop() {
  std::optional<std::string> line;
  std::vector<std::string> args;
  int status{};

  do {
    std::cout << "> ";
    if (!(line = repl_read_line())) {
      return;
    }
    // args = repl_split_line();
    // status = repl_execute(args);
  } while (status);

  return;
}

std::optional<std::string> repl_read_line() {
  std::string buffer;
  if (!std::getline(std::cin, buffer)) {
    if (!std::cin.eof()) {
      std::cerr << "readline\n";
    }
    return std::nullopt;
  }

  return buffer;
}
