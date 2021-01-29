#ifndef HOURDATAKEYDTO_hpp
#define HOURDATAKEYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class HourDataKey : public oatpp::DTO
{
   DTO_INIT(HourDataKey, DTO);
   DTO_FIELD(Int8, avg);
   DTO_FIELD(Int8, min);
   DTO_FIELD(String, Date);
   DTO_FIELD(Int8, max);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* HOURDATAKEYDTO_hpp */



