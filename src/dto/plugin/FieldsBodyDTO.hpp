#ifndef FIELDSBODYDTO_hpp
#define FIELDSBODYDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class FieldsBody : public oatpp::DTO
{
   DTO_INIT(FieldsBody, DTO);
   DTO_FIELD(Vector<String>, fields);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* FIELDSBODYDTO_hpp */
