#ifndef KeywordsDTO_hpp
#define KeywordsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "KeywordDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Keywords : public oatpp::DTO {

   DTO_INIT(Keywords, DTO)
   DTO_FIELD(Vector<Object<KeywordData>>, keywords);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordsDTO_hpp */


