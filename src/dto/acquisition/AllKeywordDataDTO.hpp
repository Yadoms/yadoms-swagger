#ifndef ALLKEYWORDDATADTO_hpp
#define ALLKEYWORDDATADTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/DateKeyDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AllKeywordData : public oatpp::DTO
{
   DTO_INIT(AllKeywordData, DTO);
   DTO_FIELD(Vector<Object<DateKey>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ALLKEYWORDDATADTO_hpp */

