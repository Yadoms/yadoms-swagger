#ifndef LogsDTO_hpp
#define LogsDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/FileDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Logs : public oatpp::DTO
{
   DTO_INIT(Logs, DTO);
   DTO_FIELD(Object<FileData>, logs);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* LogsDTO_hpp */





