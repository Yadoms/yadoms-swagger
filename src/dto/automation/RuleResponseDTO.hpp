#ifndef RuleRESPONSEDTO_hpp
#define RuleRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/RuleDataDTO.hpp"
#include "dto/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RuleResponse : public CommonsData
{
   DTO_INIT(RuleResponse, CommonsData);
   DTO_FIELD(Object<RuleData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RuleRESPONSEDTO_hpp */


