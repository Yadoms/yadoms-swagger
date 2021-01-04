#ifndef RuleCodeTemplateRESPONSEDTO_hpp
#define RuleCodeTemplateRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include "dto/automation/CodeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RuleCodeTemplateResponse : public CommonsData
{
   DTO_INIT(RuleCodeTemplateResponse, CommonsData);
   DTO_FIELD(Object<Code>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RuleCodeTemplateRESPONSEDTO_hpp */


