#ifndef NetworkInterfacesDTO_hpp
#define NetworkInterfacesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class NetworkInterfaces : public oatpp::DTO
{
   DTO_INIT(NetworkInterfaces, DTO);
   DTO_FIELD(String, LoopbackPseudoInterface1);
   DTO_FIELD(String, Ethernet);
   DTO_FIELD(String, VirtualBoxHostOnlyNetwork);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NetworkInterfacesDTO_hpp */


