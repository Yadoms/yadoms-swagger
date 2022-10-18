#ifndef RecipientDataDTO_hpp
#define RecipientDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/recipient/RecipientFieldDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class RecipientData : public oatpp::DTO
{
	DTO_INIT(RecipientData, DTO);
   DTO_FIELD(Int32, id) = 0;
   DTO_FIELD(String, firstName) = "";
   DTO_FIELD(String, lastName) = "";
   DTO_FIELD(Vector<Object<RecipientFieldData>>, fields)={Object<RecipientFieldData>()};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* RecipientCommonsDataDTO_hpp */


