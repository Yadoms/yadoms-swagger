#ifndef NewPluginDataDTO_hpp
#define NewPluginDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/NewPluginVersionsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class NewPluginData : public oatpp::DTO
{
   DTO_INIT(NewPluginData, DTO);
   DTO_FIELD(String, iconUrl) = "http://www.yadoms.com/downloads/update/dev/plugins/windows/x86/newPlugin/1.1.0/icon.png";
   DTO_FIELD(Object<NewPluginVersions>, versions) = { {Object<NewPluginVersions>({NewPluginVersions::createShared()})} };
   DTO_FIELD(Fields<Object<DownloadUrl>>, newest) = { {"1.1.0", Object<DownloadUrl>({DownloadUrl::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NewPluginDataDTO_hpp */


