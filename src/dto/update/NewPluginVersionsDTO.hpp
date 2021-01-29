#ifndef NewPluginVersionsDTO_hpp
#define NewPluginVersionsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/DownloadUrlDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class NewPluginVersions : public oatpp::DTO
{
   DTO_INIT(NewPluginVersions, DTO);
   DTO_FIELD(Fields<Object<DownloadUrl>>, versions) = { {"1.0.6", Object<DownloadUrl>({DownloadUrl::createShared()})} };
   
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NewPluginVersionsDTO_hpp */



