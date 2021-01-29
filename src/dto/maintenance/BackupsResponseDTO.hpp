#ifndef BackupsRESPONSEDTO_hpp
#define BackupsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/BackupsDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class BackupsResponse : public CommonsData
{
   DTO_INIT(BackupsResponse, CommonsData);
   DTO_FIELD(Object<Backups>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* BackupsRESPONSEDTO_hpp */


