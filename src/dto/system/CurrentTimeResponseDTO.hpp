#ifndef CurrentTimeRESPONSEDTO_hpp
#define CurrentTimeRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CurrentTimeResponse : public CommonsData
{
   DTO_INIT(CurrentTimeResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = oatpp::data::mapping::type::PairList<String, String>({ std::make_pair("now","") });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CurrentTimeRESPONSEDTO_hpp */


