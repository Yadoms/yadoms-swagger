#ifndef FriendlyNameDTO_hpp
#define FriendlyNameDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class FriendlyName : public oatpp::DTO
{
   DTO_INIT(FriendlyName, DTO);
   DTO_FIELD(String, friendlyName);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* FriendlyNameDTO_hpp */