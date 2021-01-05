#ifndef SimpleRESPONSEDTO_hpp
#define SimpleRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class SimpleResponse : public CommonsData
{
   DTO_INIT(SimpleResponse, CommonsData);
   DTO_FIELD(String, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* SimpleRESPONSEDTO_hpp */



