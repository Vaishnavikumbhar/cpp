#pragma once

#include <string>
#include <vector>
#include "DeadLockProgram.h"

int main(int argc, char **argv)
{
	std::vector<std::wstring> args(argv + 1, argv + argc);
	DeadLockProgram::main(args);
}

