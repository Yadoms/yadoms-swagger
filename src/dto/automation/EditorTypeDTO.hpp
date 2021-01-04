#ifndef EditorTypeDTO_hpp
#define EditorTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(EditorType, v_int32,
   VALUE(CODE, 1, "code"),
   VALUE(BLOCKLY, 2, "blockly")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* EditorTypeDTO_hpp */
