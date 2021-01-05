#ifndef LogDTO_hpp
#define LogDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Log : public oatpp::DTO
{
   DTO_INIT(Log, DTO);
   DTO_FIELD(String, log);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* LogDTO_hpp */




