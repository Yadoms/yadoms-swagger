#ifndef BackupDataDTO_hpp
#define BackupDataDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class BackupData : public oatpp::DTO
{
   DTO_INIT(BackupData, DTO);
   DTO_FIELD(Int32, size);
   DTO_FIELD(String, modificationDate);
   DTO_FIELD(String, path);
   DTO_FIELD(String, url);
   DTO_FIELD(Boolean, inprogress);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* BackupDataDTO_hpp */



