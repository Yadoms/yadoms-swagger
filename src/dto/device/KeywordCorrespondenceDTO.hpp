#ifndef KeywordCorrespondenceDTO_hpp
#define KeywordCorrespondenceDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordCorrespondence : public oatpp::DTO
{
   DTO_INIT(KeywordCorrespondence, DTO);
   DTO_FIELD(Int32, from);
   DTO_FIELD(Int32, to);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* KeywordCorrespondenceDTO_hpp */







