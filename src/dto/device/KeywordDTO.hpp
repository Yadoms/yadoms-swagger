#ifndef keywordDTO_hpp
#define keywordDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "KeywordDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Keyword : public oatpp::DTO {

   DTO_INIT(Keyword, DTO)
   DTO_FIELD(Vector<Object<KeywordData>>, keyword);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* keywordDTO_hpp */


