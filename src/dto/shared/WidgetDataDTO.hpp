#ifndef WidgetDataDTO_hpp
#define WidgetDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "WidgetConfigurationDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class WidgetData : public oatpp::DTO
{
   DTO_INIT(WidgetData, DTO);
   DTO_FIELD(Int32, id);
   DTO_FIELD(Int32, idPage);
   DTO_FIELD(String, type);
   DTO_FIELD(Int32, sizeX);
   DTO_FIELD(Int32, sizeY);
   DTO_FIELD(Int32, position);
   DTO_FIELD(String, title);
   DTO_FIELD(Object<WidgetConfiguration>, configuration);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetDataDTO_hpp */