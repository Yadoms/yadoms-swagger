#ifndef PluginInstanceDTO_hpp
#define PluginInstanceDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/PluginCategoryDTO.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class PluginInstance : public oatpp::DTO
{
   DTO_INIT(PluginInstance, DTO);
   DTO_FIELD(Int32, id);
   DTO_FIELD(String, displayName);
   DTO_FIELD(String, type);
   DTO_FIELD(Fields<String>, configuration) = {};
   DTO_FIELD(Boolean, autoStart);
   DTO_FIELD(Enum<PluginCategory>, category);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginInstanceDTO_hpp */

