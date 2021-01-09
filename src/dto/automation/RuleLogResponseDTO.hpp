#ifndef RuleLogRESPONSEDTO_hpp
#define RuleLogRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/automation/LogDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RuleLogResponse : public CommonsData
{
   DTO_INIT(RuleLogResponse, CommonsData);
   DTO_FIELD(Object<Log>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RuleLogRESPONSEDTO_hpp */



