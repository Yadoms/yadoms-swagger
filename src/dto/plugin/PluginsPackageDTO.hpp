#ifndef PluginsPackageDTO_hpp
#define PluginsPackageDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginsPackageDTO.hpp"
#include "dto/plugin/PluginPackageDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsPackage : public oatpp::DTO
{
   DTO_INIT(PluginsPackage, DTO);
   DTO_FIELD(Vector<Object<PluginPackageData>>, plugins);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsPackageDTO_hpp */

