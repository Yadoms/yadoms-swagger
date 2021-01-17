#ifndef DownloadDataDTO_hpp
#define DownloadDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DownloadData : public oatpp::DTO
{
   DTO_INIT(DownloadData, DTO);
   DTO_FIELD(String, downloadUrl) = "http://www.yadoms.com/downloads/update/dev/yadoms/windows/x86/2.0.1/package.zip";
   DTO_FIELD(String, md5Hash) = "850763f00551b5596e2534a17ed68334";
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DownloadDataDTO_hpp */
