#ifndef INFODTO_hpp
#define INFODTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class Info: public oatpp::DTO
{
   DTO_INIT(Info, DTO);
   DTO_FIELD(String, lastValue);
   DTO_FIELD(String, lastValueDate);
   DTO_FIELD(String, exist);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* INFODTO_hpp */
