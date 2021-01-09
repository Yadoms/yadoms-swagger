#ifndef KeywordDataTypeDTO_hpp
#define KeywordDataTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(KeywordDataType, v_int32,
   VALUE(NO_DATA, 1, "NoData"),
   VALUE(STRING, 2, "String"),
   VALUE(NUMERIC, 3, "Numeric"),
   VALUE(BOOL, 4, "Bool"),
   VALUE(JSON, 5, "Json"),
   VALUE(ENUM, 6, "Enum"),
   VALUE(DATE_TIME, 7, "DateTime")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordDataTypeDTO_hpp */


