#ifndef EmptyRESPONSEDTO_hpp
#define EmptyRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class EmptyResponse : public CommonsData
{
   DTO_INIT(EmptyResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = {};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* EmptyRESPONSEDTO_hpp */


