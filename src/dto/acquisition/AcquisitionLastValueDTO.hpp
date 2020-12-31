#ifndef KEYWORDIDDTO_hpp
#define KEYWORDIDDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class LastValue : public oatpp::DTO
{
   DTO_INIT(LastValue, DTO);
   DTO_FIELD(String, lastValue);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDIDDTO_hpp */