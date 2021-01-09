#ifndef TypeInfoDTO_hpp
#define TypeInfoDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class TypeInfo : public oatpp::DTO {

   DTO_INIT(TypeInfo, DTO)
   DTO_FIELD(String, name);
   DTO_FIELD(Vector<String>, values) = {};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* TypeInfoDTO_hpp */




