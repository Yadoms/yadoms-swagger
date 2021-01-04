#ifndef DeleteRuleRESPONSEDTO_hpp
#define DeleteRuleRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeleteRuleResponse : public CommonsData
{
   DTO_INIT(DeleteRuleResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = oatpp::data::mapping::type::PairList<String, String>({ });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeleteRuleRESPONSEDTO_hpp */


