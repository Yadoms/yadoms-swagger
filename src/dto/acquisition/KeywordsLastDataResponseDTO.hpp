#ifndef KEYWORDSLASTDATARESPONSEDTO_hpp
#define KEYWORDSLASTDATARESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/LastValueDTO.hpp"
#include "../dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordsLastDataResponse : public CommonsData
{
   DTO_INIT(KeywordsLastDataResponse, CommonsData);
   DTO_FIELD(Fields<Object<LastValue>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDSLASTDATARESPONSEDTO_hpp */