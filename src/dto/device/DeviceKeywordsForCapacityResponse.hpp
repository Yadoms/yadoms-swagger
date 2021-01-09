#ifndef DeviceKeywordsForCapacityResponseDTO_hpp
#define DeviceKeywordsForCapacityResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/device/KeywordDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeviceKeywordsForCapacityResponse : public CommonsData {

   DTO_INIT(DeviceKeywordsForCapacityResponse, CommonsData)
   DTO_FIELD(Object<Keyword>, data);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeviceKeywordsForCapacityResponseDTO_hpp */

