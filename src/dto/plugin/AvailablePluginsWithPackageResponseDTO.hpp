#ifndef AvailablePluginsWithPackageResponseDTO_hpp
#define AvailablePluginsWithPackageResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginsPackageDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AvailablePluginsWithPackageResponse : public CommonsData
{
   DTO_INIT(AvailablePluginsWithPackageResponse, CommonsData);
   DTO_FIELD(Object<PluginsPackage>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AvailablePluginsWithPackageResponseDTO_hpp */


