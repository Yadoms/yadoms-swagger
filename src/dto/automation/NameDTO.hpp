#ifndef NameDTO_hpp
#define NameDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Name : public oatpp::DTO
{
   DTO_INIT(Name, DTO);
   DTO_FIELD_INFO(name)
   {
      info->description = "Rule copy name";
   }
   DTO_FIELD(String, name);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* NameDTO_hpp */



