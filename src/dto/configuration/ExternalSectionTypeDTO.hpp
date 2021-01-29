#ifndef ExternalSectionTypeDTO_hpp
#define ExternalSectionTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(ExternalSectionType, v_int32,
   VALUE(WEBCLIENT, 1, "webClient")
)

#include OATPP_CODEGEN_END(DTO)

#endif /* ExternalSectionTypeDTO_hpp */
