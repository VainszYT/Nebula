#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <wininet.h>
#include <inttypes.h>
#include <ostream>
#include <atomic>
#include <algorithm>
#include <vector>
#include <string.h>
#include <exception>
#include <filesystem>
#include <random>
#include "minhook.h"
#include "curl.h"
#include "json.hpp"
#include "console/structs.h"
#include "console/memory.h"
#include "console/enums.h"
#include "server/hook.h"
#include "server/build.h"
#include "server/program.h"
#include "server/utilities.h"

#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "minhook/minhook.lib")