#ifndef PluginsInstanceDTO_hpp
#define PluginsInstanceDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginInstanceDTO.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsInstance : public oatpp::DTO
{
   DTO_INIT(PluginsInstance, DTO);
   DTO_FIELD(Vector<Object<PluginInstance>>, plugin);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginInstanceDTO_hpp */


