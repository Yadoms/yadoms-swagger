#ifndef CompatibleForMergeDeviceResponseDTO_hpp
#define CompatibleForMergeDeviceResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/CommonsDataDTO.hpp"
#include "dto/device/CompatibleDevicesAndKeywordsByDeviceDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CompatibleForMergeDeviceResponse : public CommonsData {

   DTO_INIT(CompatibleForMergeDeviceResponse, CommonsData)
   DTO_FIELD(Object<CompatibleDevicesAndKeywordsByDevice>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* CompatibleForMergeDeviceResponseDTO_hpp */


