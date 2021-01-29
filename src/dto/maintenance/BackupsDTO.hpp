#ifndef BackupsDTO_hpp
#define BackupsDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/FileDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Backups : public oatpp::DTO
{
   DTO_INIT(Backups, DTO);
   DTO_FIELD(Vector<Object<FileData>>, backups);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* BackupsDTO_hpp */




