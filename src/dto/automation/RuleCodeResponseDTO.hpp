#ifndef RuleCodeRESPONSEDTO_hpp
#define RuleCodeRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/automation/CodeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RuleCodeResponse : public CommonsData
{
   DTO_INIT(RuleCodeResponse, CommonsData);
   DTO_FIELD(Object<Code>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RuleCodeTemplateRESPONSEDTO_hpp */


