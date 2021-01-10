#ifndef WidgetConfigurationDTO_hpp
#define WidgetConfigurationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/DeviceConfigurationDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class WidgetConfiguration : public oatpp::DTO
{
   DTO_INIT(WidgetConfiguration, DTO);
   DTO_FIELD(Object<DeviceConfiguration>, device);
   DTO_FIELD(Vector<String>, colorsSelection) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetConfigurationDTO_hpp */
