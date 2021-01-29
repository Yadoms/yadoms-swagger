#ifndef NetworkInterfacesRESPONSEDTO_hpp
#define NetworkInterfacesRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/system/NetworkInterfacesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class NetworkInterfacesResponse : public CommonsData
{
   DTO_INIT(NetworkInterfacesResponse, CommonsData);
   DTO_FIELD(Object<NetworkInterfaces>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NetworkInterfacesRESPONSEDTO_hpp */


