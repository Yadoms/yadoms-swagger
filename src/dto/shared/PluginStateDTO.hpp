#ifndef PluginStateDTO_hpp
#define PluginStateDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(PluginState, v_int32,
   VALUE(UNKNOWN, 1, "Unknown"),
   VALUE(ERROR, 2, "Error"),
   VALUE(STOPPED, 3, "Stopped"),
   VALUE(RUNNING, 4, "Running"),
   VALUE(CUSTOM, 5, "Custom"),
   VALUE(WAIT_DEBUGGER, 6, "WaitDebugger")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginStateDTO_hpp */



