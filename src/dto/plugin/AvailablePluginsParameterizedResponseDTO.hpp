#ifndef AvailablePluginsParameterizedDTO_hpp
#define AvailablePluginsParameterizedDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsParameterizedDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AvailablePluginsParameterizedResponse : public CommonsData
{
   DTO_INIT(AvailablePluginsParameterizedResponse, CommonsData);
   DTO_FIELD(Object<PluginsParameterized>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AvailablePluginsParameterizedRESPONSEDTO_hpp */

