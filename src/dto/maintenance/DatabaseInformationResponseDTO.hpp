#ifndef DatabaseInformationRESPONSEDTO_hpp
#define DatabaseInformationRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/DatabaseInformationDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DatabaseInformationResponse : public CommonsData
{
   DTO_INIT(DatabaseInformationResponse, CommonsData);
   DTO_FIELD(Object<DatabaseInformation>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DatabaseInformationRESPONSEDTO_hpp */

