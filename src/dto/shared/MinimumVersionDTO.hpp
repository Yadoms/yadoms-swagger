#ifndef MinimumVersionDTO_hpp
#define MinimumVersionDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class MinimumVersion : public oatpp::DTO
{
   DTO_INIT(MinimumVersion, DTO);
   DTO_FIELD(String, minimumVersion);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* MinimumVersionDTO_hpp */

