#ifndef DatabaseInformationDTO_hpp
#define DatabaseInformationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/DatabaseTypeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class DatabaseInformation : public oatpp::DTO
{
   DTO_INIT(DatabaseInformation, DTO);
   DTO_FIELD(Enum<DatabaseType>, type);
   DTO_FIELD(String, version);
   DTO_FIELD(Int32, size);
   DTO_FIELD(Boolean, backupSupport);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DatabaseInformationDTO_hpp */


