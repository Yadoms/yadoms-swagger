﻿#ifndef RecipientResponseDTO_hpp
#define RecipientResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/recipient/RecipientDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RecipientResponse : public CommonsData
{
   DTO_INIT(RecipientResponse, CommonsData);
   DTO_FIELD(Object<RecipientData>, data) = { {Object<RecipientData>(RecipientData::createShared())} };
};  

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientResponseDTO_hpp */


