#ifndef PluginDeviceBodyDTO_hpp
#define PluginDeviceBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class PluginDeviceBody : public oatpp::DTO
{
   DTO_INIT(PluginDeviceBody, DTO);
   DTO_FIELD(String, name);
   DTO_FIELD(String, type);
   DTO_FIELD(String, model);
   DTO_FIELD(Fields<String>, configuration) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginDeviceBodyDTO_hpp */


