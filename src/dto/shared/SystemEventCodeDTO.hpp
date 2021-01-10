#ifndef SystemEventCodeDTO_hpp
#define SystemEventCodeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(SystemEventCode, v_int32,
   VALUE(RULE_FAILED, -6, "RuleFailed"),
   VALUE(THREAD_FAILED, -5, "ThreadFailed"),
   VALUE(TASK_FAILED, -4, "TaskFailed"),
   VALUE(PLUGIN_DISABLED, -3, "PluginDisabled"),
   VALUE(PLUGIN_CRASH, -2, "PluginCrash"),
   VALUE(YADOMS_CRASH, -1, "YadomsCrash"),
   VALUE(DEFAULT_CODE, 0, "DefaultCode"),
   VALUE(STARTED, 1, "Started"),
   VALUE(STOPPED, 2, "Stopped"),
   VALUE(UPDATED, 3, "Updated"),
   VALUE(UPDATE_AVAILABLE, 4, "UpdateAvailable")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* SystemEventCodeDTO_hpp */




