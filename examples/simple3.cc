#define ENABLE_MALG_LOG
#include <malog/logger.h>
using namespace malog;

int main()
{
   GlobalConfig::Get()
     .setLevel(Levels::kTrace)
     .setFormatter(formatter::colorfulFormatter);
   MALG_TRACE("hello malog4cpp");
   MALG_DEBUG("hello malog4cpp");
   MALG_INFO("hello malog4cpp");
   MALG_WARN("hello malog4cpp");
   MALG_ERROR("hello malog4cpp");
}