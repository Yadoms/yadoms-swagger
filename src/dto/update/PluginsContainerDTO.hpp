#ifndef PluginsContainerDTO_hpp
#define PluginsContainerDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/UpdatePluginDataDTO.hpp"
#include "dto/update/NewPluginDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsContainer : public oatpp::DTO
{
   DTO_INIT(PluginsContainer, DTO);
   DTO_FIELD(Object<UpdatePluginData>, rfxcom) = { {Object<UpdatePluginData>({UpdatePluginData::createShared()})} };
   DTO_FIELD(Fields<Object<NewPluginData>>, New) = { {"newPlugin", Object<NewPluginData>({NewPluginData::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsContainerDTO_hpp */


