#ifndef ExportDataDTO_hpp
#define ExportDataDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/FileDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ExportData : public oatpp::DTO
{
   DTO_INIT(ExportData, DTO);
   DTO_FIELD(Object<FileData>, exportData);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ExportDataDTO_hpp */





