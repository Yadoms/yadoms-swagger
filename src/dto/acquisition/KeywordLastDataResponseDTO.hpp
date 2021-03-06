﻿#ifndef KEYWORDLASTDATARESPONSEDTO_hpp
#define KEYWORDLASTDATARESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/LastValueDTO.hpp"
#include "../dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordLastDataResponse : public CommonsData
{
   DTO_INIT(KeywordLastDataResponse, CommonsData);
   DTO_FIELD(Object<LastValue>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDLASTDATARESPONSEDTO_hpp */
