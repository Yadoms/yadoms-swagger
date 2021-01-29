#ifndef PluginDevicesResponseDTO_hpp
#define PluginDevicesResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/device/DeviceDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginDevicesResponse : public CommonsData
{

   DTO_INIT(PluginDevicesResponse, CommonsData);
   DTO_FIELD(Fields<Vector<Object<DeviceData>>>, data) = {{"devices", Vector<Object<DeviceData>>({DeviceData::createShared()})}};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginDevicesResponseDTO_hpp */