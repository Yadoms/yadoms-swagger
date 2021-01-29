#ifndef AllRulesRESPONSEDTO_hpp
#define AllRulesRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/automation/RulesDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllRulesResponse : public CommonsData
{
   DTO_INIT(AllRulesResponse, CommonsData);
   DTO_FIELD(Object<Rules>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllRulesRESPONSEDTO_hpp */

