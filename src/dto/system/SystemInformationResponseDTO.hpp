#ifndef SystemInformationRESPONSEDTO_hpp
#define SystemInformationRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/system/SystemInformationDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class SystemInformationResponse : public CommonsData
{
   DTO_INIT(SystemInformationResponse, CommonsData);
   DTO_FIELD(Object<SystemInformation>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* SystemInformationRESPONSEDTO_hpp */



