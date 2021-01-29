#ifndef ResultRESPONSEDTO_hpp
#define ResultRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ResultResponse : public CommonsData
{
   DTO_INIT(ResultResponse, CommonsData);
   DTO_FIELD(Fields<Boolean>, data) = oatpp::data::mapping::type::PairList<String, Boolean>({ std::make_pair("result", true) });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ResultRESPONSEDTO_hpp */


