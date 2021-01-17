#ifndef DownloadUrlDataDTO_hpp
#define DownloadUrlDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DownloadUrl : public oatpp::DTO
{
   DTO_INIT(DownloadUrl, DTO);
   DTO_FIELD(String, downloadUrl) = "http://www.yadoms.com/downloads/update/dev/plugins/windows/x86/rfxcom/1.1.0/rfxcom.zip";
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DownloadUrlDataDTO_hpp */

