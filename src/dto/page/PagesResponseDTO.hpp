#ifndef PagesRESPONSEDTO_hpp
#define PagesRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/page/PagesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PagesResponse : public CommonsData
{
   DTO_INIT(PagesResponse, CommonsData);
   DTO_FIELD(Object<Pages>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PagesRESPONSEDTO_hpp */


