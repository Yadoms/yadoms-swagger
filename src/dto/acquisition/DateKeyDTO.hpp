#ifndef DATEKEYDTO_hpp
#define DATEKEYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class DateKey : public oatpp::DTO
{
   DTO_INIT(DateKey, DTO);
   DTO_FIELD(String, date);
   DTO_FIELD(String, key);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* DATEKEYDTO_hpp */


