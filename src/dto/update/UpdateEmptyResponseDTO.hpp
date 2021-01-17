#ifndef UpdateEmptyRESPONSEDTO_hpp
#define UpdateEmptyRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class UpdateEmptyResponse : public CommonsData
{
   DTO_INIT(UpdateEmptyResponse, CommonsData);
   DTO_FIELD(String, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* UpdateEmptyRESPONSEDTO_hpp */

