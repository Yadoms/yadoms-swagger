#ifndef ServerConfigurationDataDTO_hpp
#define ServerConfigurationDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/configuration/LocationDTO.hpp"
#include "dto/configuration/BasicAuthenticationDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ServerConfigurationData : public oatpp::DTO
{
   DTO_INIT(ServerConfigurationData, DTO);
   DTO_FIELD(Boolean, firstStart);
   DTO_FIELD(Object<Location>, location);
   DTO_FIELD(Object<BasicAuthentication>, basicAuthentication);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ServerConfigurationDataDTO_hpp */



