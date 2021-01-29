#ifndef InterpreterTypeDTO_hpp
#define InterpreterTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(InterpreterType, v_int32,
   VALUE(YPYTHON3, 1, "yPython3"),
   VALUE(YPYTHON2, 2, "yPython2")
)

#include OATPP_CODEGEN_END(DTO)

#endif /* InterpreterTypeDTO_hpp */