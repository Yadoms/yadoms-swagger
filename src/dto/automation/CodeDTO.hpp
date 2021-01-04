#ifndef CodeDTO_hpp
#define CodeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Code : public oatpp::DTO
{
   DTO_INIT(Code, DTO);
   DTO_FIELD(String, code);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CodeDTO_hpp */



