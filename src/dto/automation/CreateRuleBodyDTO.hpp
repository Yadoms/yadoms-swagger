#ifndef CreateRuleBodyDTO_hpp
#define CreateRuleBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(InterpreterType, v_int32,
   VALUE(YPYTHON3, 1, "yPython3"),
   VALUE(YPYTHON2, 2, "yPython2")
);

ENUM(EditorType, v_int32,
   VALUE(CODE, 1, "code"),
   VALUE(BLOCKLY, 2, "blockly")
);

class CreateRuleBody : public oatpp::DTO
{
   DTO_INIT(CreateRuleBody, DTO);
   DTO_FIELD(String, name);
   DTO_FIELD(String, description);
   DTO_FIELD(Enum<InterpreterType>::AsString, interpreter);
   DTO_FIELD(Enum<EditorType>, editor);
   DTO_FIELD(String, model);
   DTO_FIELD(String, content);
   DTO_FIELD(String, configuration);
   DTO_FIELD(Boolean, autoStart);
   DTO_FIELD(String, code);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* CreateRuleBodyDTO_hpp */





