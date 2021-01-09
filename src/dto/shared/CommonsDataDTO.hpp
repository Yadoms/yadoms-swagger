#ifndef COMMONSDATADTO_hpp
#define COMMONSDATADTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CommonsData : public oatpp::DTO
{
   DTO_INIT(CommonsData, DTO);
   DTO_FIELD(Boolean, result);
   DTO_FIELD(String, message);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* COMMONSDATADTO_hpp */
