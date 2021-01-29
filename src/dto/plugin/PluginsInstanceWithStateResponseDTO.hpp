#ifndef PluginsInstanceWithStateResponseDTO_hpp
#define PluginsInstanceWithStateResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsInstanceWithStateDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsInstanceWithStateResponse : public CommonsData
{
   DTO_INIT(PluginsInstanceWithStateResponse, CommonsData);
   DTO_FIELD(Object<PluginsInstanceWithState>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsInstanceWithStateResponseDTO_hpp */



