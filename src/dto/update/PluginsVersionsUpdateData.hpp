#ifndef PluginsVersionsUpdateDataDTO_hpp
#define PluginsVersionsUpdateDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/DownloadUrlDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsVersionsUpdateData : public oatpp::DTO
{
   DTO_INIT(PluginsVersionsUpdateData, DTO);
   DTO_FIELD(String, installed) = "1.3.1";
   DTO_FIELD(Fields<Object<DownloadUrl>>, older) = {
         {"1.1.0", Object<DownloadUrl>({DownloadUrl::createShared()})},
         {"1.0.6", Object<DownloadUrl>({DownloadUrl::createShared()})}
      };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsVersionsUpdateDataDTO_hpp */
