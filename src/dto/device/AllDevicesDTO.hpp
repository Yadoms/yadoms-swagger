#ifndef AllDevicesDTO_hpp
#define AllDevicesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "DeviceDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllDevices : public oatpp::DTO {

   DTO_INIT(AllDevices, DTO)
   DTO_FIELD(Vector<Object<DeviceData>>, device);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* AllDevicesResponseDTO_hpp */

