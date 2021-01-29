#ifndef WidgetRESPONSEDTO_hpp
#define WidgetRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/shared/WidgetDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class WidgetResponse : public CommonsData
{
   DTO_INIT(WidgetResponse, CommonsData);
   DTO_FIELD(Object<WidgetData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetsRESPONSEDTO_hpp */




