#ifndef WidgetsContainerDTO_hpp
#define WidgetsContainerDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/UpdatePluginDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class WidgetsContainer : public oatpp::DTO
{
   DTO_INIT(WidgetsContainer, DTO);
   DTO_FIELD(Object<UpdatePluginData>, shutter) = { {Object<UpdatePluginData>({UpdatePluginData::createShared()})} };
   DTO_FIELD(Fields<String>, New) = {};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* WidgetsContainerDTO_hpp */



