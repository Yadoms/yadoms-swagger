#ifndef KEYWORDLASTDATABODYDTO_hpp
#define KEYWORDLASTDATABODYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsLastDataBody : public oatpp::DTO
{
   DTO_INIT(KeywordsLastDataBody, DTO);
   DTO_FIELD(Vector<String>, keywords);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDLASTDATABODYDTO_hpp */