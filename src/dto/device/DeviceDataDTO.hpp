#ifndef DeviceDataDTO_hpp
#define DeviceDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeviceData : public oatpp::DTO {

   DTO_INIT(DeviceData, DTO)
   DTO_FIELD(Int32, id) = 0;
   DTO_FIELD(Int32, pluginId) = 0;
   DTO_FIELD(String, name) = "";
   DTO_FIELD(String, friendlyName) = "";
   DTO_FIELD(String, model) = "";;
   DTO_FIELD(Fields<String>, details) = {};
   DTO_FIELD(Fields<String>, configuration) = {};
   DTO_FIELD(String, type) = "";
   DTO_FIELD(Boolean, blacklist) = false;
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeviceDataDTO_hpp */


