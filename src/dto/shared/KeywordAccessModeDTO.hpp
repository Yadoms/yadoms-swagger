#ifndef KeywordAccessModeDTO_hpp
#define KeywordAccessModeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(KeywordAccessMode, v_int32,
   VALUE(NO_ACCESS, 1, "NoAccess"),
   VALUE(GET, 2, "Get"),
   VALUE(GET_SET, 3, "GetSet")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordAccessModeDTO_hpp */

