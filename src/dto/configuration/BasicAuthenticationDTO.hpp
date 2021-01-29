#ifndef BasicAuthenticationDTO_hpp
#define BasicAuthenticationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class BasicAuthentication : public oatpp::DTO
{
   DTO_INIT(BasicAuthentication, DTO);
   DTO_FIELD(Boolean, active);
   DTO_FIELD(String, user);
   DTO_FIELD(String, password);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* BasicAuthenticationDTO_hpp */





