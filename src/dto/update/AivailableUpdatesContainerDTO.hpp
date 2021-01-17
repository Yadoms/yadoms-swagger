#ifndef availableUpdatesContainerDTO_hpp
#define availableUpdatesContainerDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/YadomsUpdateDataDTO.hpp"
#include "dto/update/PluginsContainerDTO.hpp"
#include "dto/update/WidgetsContainerDTO.hpp"
#include "dto/update/ScriptInterpretersContainerDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AvailableUpdatesContainer : public oatpp::DTO
{
   DTO_INIT(AvailableUpdatesContainer, DTO);
   DTO_FIELD(Object<YadomsUpdateData>, yadoms) = { {Object<YadomsUpdateData>({YadomsUpdateData::createShared()})} };
   DTO_FIELD(Fields<Object<PluginsContainer>>, plugins) = { {"updateable", Object<PluginsContainer>({PluginsContainer::createShared()})} };
   DTO_FIELD(Fields<Object<WidgetsContainer>>, widgets) = { {"updateable", Object<WidgetsContainer>({WidgetsContainer::createShared()})} };
   DTO_FIELD(Fields<Object<ScriptInterpretersContainer>>, scriptInterpreters) = { {"updateable", Object<ScriptInterpretersContainer>({ScriptInterpretersContainer::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* availableUpdatesContainerDTO_hpp */

