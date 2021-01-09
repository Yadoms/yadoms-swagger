#ifndef BlacklistDTO_hpp
#define BlacklistDTO_hpp
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class Blacklist : public oatpp::DTO
{
   DTO_INIT(Blacklist, DTO);
   DTO_FIELD(Boolean, blacklist);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* BlacklistDTO_hpp */
