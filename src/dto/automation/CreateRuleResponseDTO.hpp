#ifndef CreateRuleRESPONSEDTO_hpp
#define CreateRuleRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/RulesDTO.hpp"
#include "dto/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CreateRuleResponse : public CommonsData
{
   DTO_INIT(CreateRuleResponse, CommonsData);
   DTO_FIELD(Object<RulesData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllRulesRESPONSEDTO_hpp */


