#ifndef KEYWORDINFOBODYDTO_hpp
#define KEYWORDINFOBODYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class KeywordInfoBody : public oatpp::DTO
{
   DTO_INIT(KeywordInfoBody, DTO);
   DTO_FIELD(Vector<String>, info) = Vector<String>({ "lastValue","lastValueDate","exist" });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDINFOBODYDTO_hpp */

