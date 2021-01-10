#ifndef ExportDataRESPONSEDTO_hpp
#define ExportDataRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/ExportDataDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ExportDataResponse : public CommonsData
{
   DTO_INIT(ExportDataResponse, CommonsData);
   DTO_FIELD(Object<ExportData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ExportDataRESPONSEDTO_hpp */



