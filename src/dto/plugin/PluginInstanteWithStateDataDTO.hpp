#ifndef PluginInstanceWithStateDataDTO_hpp
#define PluginInstanceWithStateDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginInstanceDTO.hpp"
#include "StateDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginInstanceWithStateData : public oatpp::DTO
{
   DTO_INIT(PluginInstanceWithStateData, DTO);
   DTO_FIELD(Object<PluginInstance>, instance);
   DTO_FIELD(Object<State>, state);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginInstanceWithStateDataDTO_hpp */





