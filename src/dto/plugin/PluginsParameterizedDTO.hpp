#ifndef PluginsParameterizedDTO_hpp
#define PluginsParameterizedDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/plugin/PluginsParameterizedDTO.hpp"
#include "dto/plugin/PluginDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsParameterized : public oatpp::DTO
{
   DTO_INIT(PluginsParameterized, DTO);
   DTO_FIELD(Vector<Object<PluginData>>, plugins);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsParameterizedDTO_hpp */
