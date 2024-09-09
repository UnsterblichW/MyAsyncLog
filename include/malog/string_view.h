#pragma once

#if (__cplusplus && __cplusplus >= 201703L) ||                                 \
  (_MSC_VER && _MSVC_LANG >= 201703L)
#include <string_view>
namespace malog {
using StringView = std::string_view;
}
#else
#include "dependencies/string_vew_lite.h"
namespace malog {
using StringView = nonstd::string_view;
}

#endif