#ifndef KEYWORDSLISTINFOBODYDTO_hpp
#define KEYWORDSLISTINFOBODYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "oatpp/core/data/mapping/type/Object.hpp"
//enum Color { red, green, blue };

#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsListInfoBody : public oatpp::DTO
{
   DTO_INIT(KeywordsListInfoBody, DTO);
   DTO_FIELD(Vector<String>, keywords);
   DTO_FIELD(Vector<String>, info) = Vector<String>({"lastValue","lastValueDate","exist"});
 
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDSLISTINFOBODYDTO_hpp */
