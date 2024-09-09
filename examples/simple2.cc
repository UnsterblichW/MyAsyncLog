#include <malog/logger.h>
using namespace malog;

int main()
{
   GlobalConfig::Get()
     .setLevel(Levels::kTrace)
     .setFormatter(formatter::colorfulFormatter);
   Log::trace(loc::current(), "hello malog4cpp");
   Log::debug(loc::current(), "hello malog4cpp");
   Log::info(loc::current(), "hello malog4cpp");
   Log::warn(loc::current(), "hello malog4cpp");
   Log::error(loc::current(), "hello malog4cpp");
}