#ifndef CapacityDTO_hpp
#define CapacityDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/KeywordDataTypeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Capacity : public oatpp::DTO
{
   DTO_INIT(Capacity, DTO);
   DTO_FIELD(String, name) = "";
   DTO_FIELD(String, unit) = "";
   DTO_FIELD(Enum<KeywordDataType>, dataType) = KeywordDataType::STRING;
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CapacityDTO_hpp */


