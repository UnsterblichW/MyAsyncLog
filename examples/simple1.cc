#include <malog/logger.h>
using namespace malog;

int main()
{
   Log::trace("hello malog4cpp");
   Log::debug("hello malog4cpp");
   Log::info("hello malog4cpp");
   Log::warn("hello malog4cpp");
   Log::error("hello malog4cpp");
   Log::fatal("hello malog4cpp");
}