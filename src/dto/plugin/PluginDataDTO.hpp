#ifndef PluginDataDTO_hpp
#define PluginDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/DependenciesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginData : public oatpp::DTO
{
   DTO_INIT(PluginData, DTO);
   DTO_FIELD(String, type);
   DTO_FIELD(String, version);
   DTO_FIELD(String, author);
   DTO_FIELD(String, url);
   DTO_FIELD(String, credits);
   DTO_FIELD(String, supportedPlatforms);
   DTO_FIELD(Object<Dependencies>, dependencies);
   DTO_FIELD(Fields<String>, configurationSchema) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginDataDTO_hpp */
