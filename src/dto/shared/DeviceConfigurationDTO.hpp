#ifndef DeviceConfigurationDTO_hpp
#define DeviceConfigurationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeviceConfiguration : public oatpp::DTO
{
   DTO_INIT(DeviceConfiguration, DTO);
   DTO_FIELD(Int32, deviceId);
   DTO_FIELD(Int32, keywordId);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeviceConfigurationDTO_hpp */

