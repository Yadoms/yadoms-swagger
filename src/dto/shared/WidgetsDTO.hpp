#ifndef WidgetsDTO_hpp
#define WidgetsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/WidgetDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Widgets : public oatpp::DTO
{
   DTO_INIT(Widgets, DTO);
   DTO_FIELD(Vector<Object<WidgetData>>, widget);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetsDTO_hpp */


