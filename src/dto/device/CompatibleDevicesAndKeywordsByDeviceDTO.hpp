#ifndef CompatibleDevicesAndKeywordsByDeviceDTO_hpp
#define CompatibleDevicesAndKeywordsByDeviceDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CompatibleDevicesAndKeywordsByDevice : public oatpp::DTO {

   DTO_INIT(CompatibleDevicesAndKeywordsByDevice, DTO)
   DTO_FIELD(Vector<String>, compatibleDevices) = {};
   DTO_FIELD(Fields<String>, commonKeywordsByDevice) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* CompatibleDevicesAndKeywordsByDeviceDTO_hpp */


