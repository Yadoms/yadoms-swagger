#ifndef TaskStatusDTO_hpp
#define TaskStatusDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(TaskStatus, v_int32,
   VALUE(STARTED, 0, "Started"),
   VALUE(SUCCESS, 1, "Success"),
   VALUE(FAIL, 2, "Fail")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* TaskStatusDTO_hpp */




