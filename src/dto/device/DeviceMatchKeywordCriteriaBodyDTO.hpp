#ifndef DeviceMatchKeywordCriteriaBodyDTO_hpp
#define DeviceMatchKeywordCriteriaBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/KeywordDataTypeDTO.hpp"
#include "dto/shared/KeywordAccessModeDTO.hpp"
#include "dto/shared/HistoryDepthDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DeviceMatchKeywordCriteria : public oatpp::DTO
{
   DTO_INIT(DeviceMatchKeywordCriteria, DTO);
   DTO_FIELD(Vector<Enum<KeywordDataType>>, expectedKeywordType);
   DTO_FIELD(Vector<String>, expectedCapacity);
   DTO_FIELD(Vector<Enum<KeywordAccessMode>>, expectedKeywordAccess);
   DTO_FIELD(Vector<Enum<HistoryDepth>>, expectedKeywordHistoryDepth);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DeviceMatchKeywordCriteriaBodyDTO_hpp */






