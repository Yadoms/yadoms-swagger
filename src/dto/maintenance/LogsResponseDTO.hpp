#ifndef LogsRESPONSEDTO_hpp
#define LogsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/maintenance/LogsDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class LogsResponse : public CommonsData
{
   DTO_INIT(LogsResponse, CommonsData);
   DTO_FIELD(Object<Logs>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* LogsRESPONSEDTO_hpp */



