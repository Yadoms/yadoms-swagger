#ifndef RecipientsResponseRESPONSEDTO_hpp
#define RecipientsResponseRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/recipient/RecipientDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RecipientsResponseResponse : public CommonsData
{
   DTO_INIT(RecipientsResponseResponse, CommonsData);
   DTO_FIELD(Fields<Vector<Object<RecipientData>>>, data) = { {"recipient", Vector<Object<RecipientData>>({RecipientData::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientsResponseEmptyRESPONSEDTO_hpp */

