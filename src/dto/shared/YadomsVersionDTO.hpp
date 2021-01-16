#ifndef YadomsVersionDTO_hpp
#define YadomsVersionDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class YadomsVersion : public oatpp::DTO
{
   DTO_INIT(YadomsVersion, DTO);
   DTO_FIELD(String, version);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* YadomsVersionDTO_hpp */



