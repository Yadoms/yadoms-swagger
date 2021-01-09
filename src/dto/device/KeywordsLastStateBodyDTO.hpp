#ifndef KeywordsLastStateBodyDTO_hpp
#define KeywordsLastStateBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsLastStateBody : public oatpp::DTO
{
   DTO_INIT(KeywordsLastStateBody, DTO);
   DTO_FIELD(Vector<Int32>, keywordIds);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordsLastStateBodyDTO_hpp */







