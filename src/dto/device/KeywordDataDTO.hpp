#ifndef KeywordDataDTO_hpp
#define KeywordDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/device/TypeInfoDTO.hpp"
#include "dto/shared/KeywordAccessModeDTO.hpp"
#include "dto/shared/MeasureTypeDTO.hpp"
#include "dto/shared/HistoryDepthDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordData : public oatpp::DTO {

   DTO_INIT(KeywordData, DTO)
   DTO_FIELD(Int32, id);
   DTO_FIELD(Int32, deviceId);
   DTO_FIELD(String, capacityName);
   DTO_FIELD(Enum<KeywordAccessMode>, accessMode);
   DTO_FIELD(String, name);
   DTO_FIELD(String, friendlyName);
   DTO_FIELD(String, type);
   DTO_FIELD(String, units);
   DTO_FIELD(Fields<Object<TypeInfo>>, typeInfo) = {};
   DTO_FIELD(Enum<MeasureType>, measure);
   DTO_FIELD(Fields<String>, details) = {};
   DTO_FIELD(Boolean, blacklist);
   DTO_FIELD(String, lastAcquisitionValue);
   DTO_FIELD(String, lastAcquisitionDate);
   DTO_FIELD(Enum<HistoryDepth>, historyDepth);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordDataDTO_hpp */



