#ifndef DeviceDataToUpdateDTO_hpp
#define DeviceDataToUpdateDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeviceDataToUpdate : public oatpp::DTO {

   DTO_INIT(DeviceDataToUpdate, DTO)
   DTO_FIELD(String, friendlyName);
   DTO_FIELD(String, model);
   DTO_FIELD(Fields<String>, configuration) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeviceDataToUpdateDTO_hpp */



