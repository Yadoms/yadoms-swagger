#ifndef WidgetsRESPONSEDTO_hpp
#define WidgetsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/shared/WidgetsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class WidgetsResponse : public CommonsData
{
   DTO_INIT(WidgetsResponse, CommonsData);
   DTO_FIELD(Object<Widgets>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetsRESPONSEDTO_hpp */



