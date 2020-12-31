#ifndef AQUISITIONDATADTO_hpp
#define AQUISITIONDATADTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/AcquisitionKeywordIdDataDTO.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class Data : public oatpp::DTO
{
   DTO_INIT(Data, DTO);
   DTO_FIELD(Object <KeywordId>, keywordId);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AQUISITIONDATADTO_hpp */
