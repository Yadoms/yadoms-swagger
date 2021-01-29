#ifndef PluginPackageDataDTO_hpp
#define PluginPackageDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginPackageData : public oatpp::DTO
{
   DTO_INIT(PluginPackageData, DTO);
   DTO_FIELD(String, type);
   DTO_FIELD(Object<PluginData>, package);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginPackageDataDTO_hpp */

