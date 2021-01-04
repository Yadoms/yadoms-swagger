#ifndef RulesDataDTO_hpp
#define RulesDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RulesData : public oatpp::DTO
{
   DTO_INIT(RulesData, DTO);
   DTO_FIELD(Int32, id);
   DTO_FIELD(String, name);
   DTO_FIELD(String, description);
   DTO_FIELD(String, interpreter);
   DTO_FIELD(String, editor);
   DTO_FIELD(String, model);
   DTO_FIELD(String, content);
   DTO_FIELD(String, configuration);
   DTO_FIELD(Boolean, autoStart);
   DTO_FIELD(String, state);
   DTO_FIELD(String, errorMessage);
   DTO_FIELD(String, startDate);
   DTO_FIELD(String, stopDate);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RulesDTO_hpp */




