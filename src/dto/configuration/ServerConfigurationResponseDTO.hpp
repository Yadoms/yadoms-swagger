#ifndef ServerConfigurationResponseDTO_hpp
#define ServerConfigurationResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include "dto/configuration/ServerConfigurationDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ServerConfigurationResponse : public CommonsData
{
   DTO_INIT(ServerConfigurationResponse, CommonsData);
   DTO_FIELD(Object<ServerConfigurationData>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* ServerConfigurationResponseDTO_hpp */



