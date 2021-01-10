#ifndef PageRESPONSEDTO_hpp
#define PageRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/page/PageDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PageResponse : public CommonsData
{
   DTO_INIT(PageResponse, CommonsData);
   DTO_FIELD(Object<PageData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PageRESPONSEDTO_hpp */



