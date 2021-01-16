#ifndef RecipientFieldDataDTO_hpp
#define RecipientFieldDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RecipientFieldData : public oatpp::DTO
{
   DTO_INIT(RecipientFieldData, DTO);
   DTO_FIELD(Int32, idRecipient) = 0;
   DTO_FIELD(String, pluginType) = "";
   DTO_FIELD(String, fieldName) = "";
   DTO_FIELD(String, value) = "";

};

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientFieldDataDTO_hpp */



