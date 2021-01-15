#ifndef AvailablePluginsRESPONSEDTO_hpp
#define AvailablePluginsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AvailablePluginsResponse : public CommonsData
{
   DTO_INIT(AvailablePluginsResponse, CommonsData);
   DTO_FIELD(Object<Plugins>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AvailablePluginsRESPONSEDTO_hpp */

