#ifndef AllDevicesResponseDTO_hpp
#define AllDevicesResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include "AllDevicesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllDevicesResponse : public CommonsData {
  
  DTO_INIT(AllDevicesResponse, CommonsData)
  DTO_FIELD(Object<AllDevices>, data);
 
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllDevicesResponseDTO_hpp */
