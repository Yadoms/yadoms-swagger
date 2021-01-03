#ifndef KEYWORDDATABYHOURDTO_hpp
#define KEYWORDDATABYHOURDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/HourDataKeyDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class KeywordDataByHour : public oatpp::DTO
{
   DTO_INIT(KeywordDataByHour, DTO);
   DTO_FIELD(Vector<Object<HourDataKey>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDDATABYHOURDTO_hpp */

