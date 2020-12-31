#ifndef KEYWORDSDTO_hpp
#define KEYWORDSDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class Keywords : public oatpp::DTO
{
   DTO_INIT(Keywords, DTO);
   DTO_FIELD(Vector<String>, keywords);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDSDTO_hpp */