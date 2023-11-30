#include "pch.h"
#pragma once
#pragma warning
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <Windows.h>
#include <cstdint>
#include <vector>
#include <string>
#include <iostring>

auto __stdcall DLLMain(void*, std::uint32_t call_reason, void*) -> bool
{
  DWORD non{};
  VirtualProtect((PVOID)&FreeConsole);
}
