#ifndef VersionsUpdateDataDTO_hpp
#define VersionsUpdateDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/DownloadDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class VersionsUpdateData : public oatpp::DTO
{
   DTO_INIT(VersionsUpdateData, DTO);
   DTO_FIELD(String, installed) = "2.5.0-beta.1";
   DTO_FIELD(Fields<Object<DownloadData>>, older) = { {"2.0.1", Object<DownloadData>({DownloadData::createShared()})} ,{"2.0.0", Object<DownloadData>({DownloadData::createShared()})} };
   DTO_FIELD(Fields<Object<DownloadData>>, newer) = { {"2.0.2", Object<DownloadData>({DownloadData::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* VersionsUpdateDataDTO_hpp */



