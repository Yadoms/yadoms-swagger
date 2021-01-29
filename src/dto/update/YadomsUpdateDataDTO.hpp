#ifndef YadomsUpdateDataDTO_hpp
#define YadomsUpdateDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/VersionsUpdateDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class YadomsUpdateData : public oatpp::DTO
{
   DTO_INIT(YadomsUpdateData, DTO);
   DTO_FIELD(String, changelogUrl) = "http://www.yadoms.com/downloads/update/dev/yadoms/windows/x86/changelog.md";
   DTO_FIELD(Object<VersionsUpdateData>, versions) = { {Object<VersionsUpdateData>({VersionsUpdateData::createShared()})} };

};

#include OATPP_CODEGEN_END(DTO)

#endif /* YadomsUpdateDataDTO_hpp */


