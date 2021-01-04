#ifndef InterpretersDTO_hpp
#define InterpretersDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Interpreters : public oatpp::DTO
{
   DTO_INIT(Interpreters, DTO);
   DTO_FIELD(Vector<String>, interpreters);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* InterpretersDTO_hpp */


