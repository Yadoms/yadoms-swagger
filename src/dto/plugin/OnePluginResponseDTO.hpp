#ifndef OnePluginResponseDTO_hpp
#define OnePluginResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/plugin/PluginInstanceDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class OnePluginResponse : public CommonsData
{
   DTO_INIT(OnePluginResponse, CommonsData);
   DTO_FIELD(Object<PluginInstance>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* OnePluginResponseDTO_hpp */



