#ifndef CreateRuleBodyDTO_hpp
#define CreateRuleBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/InterpreterTypeDTO.hpp"
#include "dto/automation/EditorTypeDTO.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class CreateRuleBody : public oatpp::DTO
{
   DTO_INIT(CreateRuleBody, DTO);
   DTO_FIELD(String, name);
   DTO_FIELD(String, description);
   DTO_FIELD(Enum<InterpreterType>, interpreter);
   DTO_FIELD(Enum<EditorType>, editor);
   DTO_FIELD(String, model);
   DTO_FIELD(String, content);
   DTO_FIELD(String, configuration);
   DTO_FIELD(Boolean, autoStart);
   DTO_FIELD(String, code);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* CreateRuleBodyDTO_hpp */





