﻿#pragma once

#include <benchmark/benchmark.h>
#include <cmath>
#include <mtensor.hpp>

using namespace matazure;

using matazure::device_tag;
using matazure::host_tag;

constexpr int_t operator"" _G(unsigned long long v) { return 1000 * 1000 * 1000 * v; }
constexpr int_t operator"" _M(unsigned long long v) { return 1000 * 1000 * v; }
constexpr int_t operator"" _K(unsigned long long v) { return 1000 * v; }
