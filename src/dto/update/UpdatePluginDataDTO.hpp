#ifndef UpdatePluginDataDTO_hpp
#define UpdatePluginDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/PluginsVersionsUpdateData.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class UpdatePluginData : public oatpp::DTO
{
   DTO_INIT(UpdatePluginData, DTO);
   DTO_FIELD(String, iconUrl) = "plugins/rfxcom/icon.png";
   DTO_FIELD(String, changelogUrl) = "http://www.yadoms.com/downloads/update/dev/plugins/windows/x86/rfxcom/changelog.md";
   DTO_FIELD(Object<PluginsVersionsUpdateData>, versions) = { {Object<PluginsVersionsUpdateData>({PluginsVersionsUpdateData::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* UpdatePluginDataDTO_hpp */





