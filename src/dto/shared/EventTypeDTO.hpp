#ifndef EventTypeDTO_hpp
#define EventTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(EventType, v_int32,
   VALUE(UNLOAD, 1, "Unload"),
   VALUE(LOAD, 2, "Load"),
   VALUE(CRASH, 3, "Crash"),
   VALUE(INFO, 4, "Info"),
   VALUE(ERROR, 5, "Error")
);


#include OATPP_CODEGEN_END(DTO)

#endif /* EventTypeDTO_hpp */

