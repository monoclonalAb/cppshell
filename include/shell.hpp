// copyright 2026 <eric zheng>

#pragma once

#include <optional>
#include <string>

void repl_loop();

std::optional<std::string> repl_read_line();

void repl_execute_line();

void repl_execute();
