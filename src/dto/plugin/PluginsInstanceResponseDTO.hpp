#ifndef PluginsInstanceResponseDTO_hpp
#define PluginsInstanceResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsInstanceDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsInstanceResponse : public CommonsData
{
   DTO_INIT(PluginsInstanceResponse, CommonsData);
   DTO_FIELD(Object<PluginsInstance>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsInstanceResponseDTO_hpp */



