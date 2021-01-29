#ifndef NetworkInterfacesWithoutLoopbackRESPONSEDTO_hpp
#define NetworkInterfacesWithoutLoopbackRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class NetworkInterfacesWithoutLoopbackResponse : public CommonsData
{
   DTO_INIT(NetworkInterfacesWithoutLoopbackResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = oatpp::data::mapping::type::PairList<String, String>({ std::make_pair("LoopbackPseudoInterface1","") });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NetworkInterfacesWithoutLoopbackRESPONSEDTO_hpp */



