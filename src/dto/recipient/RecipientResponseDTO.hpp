#ifndef RecipientResponseRESPONSEDTO_hpp
#define RecipientResponseRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/recipient/RecipientDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RecipientResponseResponse : public CommonsData
{
   DTO_INIT(RecipientResponseResponse, CommonsData);
   DTO_FIELD(Object<RecipientData>, data) = { {Object<RecipientData>(RecipientData::createShared())} };
};  

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientResponseEmptyRESPONSEDTO_hpp */


