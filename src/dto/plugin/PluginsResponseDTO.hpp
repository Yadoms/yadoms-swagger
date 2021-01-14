#ifndef PluginsRESPONSEDTO_hpp
#define PluginsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginsResponse : public CommonsData
{
   DTO_INIT(PluginsResponse, CommonsData);
   DTO_FIELD(Object<Plugins>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* EmptyRESPONSEDTO_hpp */

