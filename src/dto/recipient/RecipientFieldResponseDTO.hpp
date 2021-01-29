#ifndef RecipientFieldResponseRESPONSEDTO_hpp
#define RecipientFieldResponseRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/recipient/RecipientFieldDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RecipientFieldResponse : public CommonsData
{
   DTO_INIT(RecipientFieldResponse, CommonsData);
   DTO_FIELD(Fields<Vector<Object<RecipientFieldData>>>, data) = { {"field", Vector<Object<RecipientFieldData>>({RecipientFieldData::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientFieldResponseRESPONSEDTO_hpp */



