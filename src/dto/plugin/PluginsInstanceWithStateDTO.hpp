#ifndef PluginsInstanceWithStateDTO_hpp
#define PluginsInstanceWithStateDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginInstanteWithStateDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsInstanceWithState : public oatpp::DTO
{
   DTO_INIT(PluginsInstanceWithState, DTO);
   DTO_FIELD(Vector<Object<PluginInstanceWithStateData>>, plugin);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsInstanceWithStateDTO_hpp */




