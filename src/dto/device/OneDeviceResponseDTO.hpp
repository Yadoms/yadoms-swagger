#ifndef OneDeviceResponseDTO_hpp
#define OneDeviceResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/device/DeviceDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class OneDeviceResponse : public CommonsData {

   DTO_INIT(OneDeviceResponse, CommonsData)
   DTO_FIELD(Object<DeviceData>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* OneDeviceResponseDTO_hpp */

