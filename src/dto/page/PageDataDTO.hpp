#ifndef PageDataDTO_hpp
#define PageDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PageData : public oatpp::DTO
{
   DTO_INIT(PageData, DTO);
   DTO_FIELD(Int32, id);
   DTO_FIELD(String, name);
   DTO_FIELD(Int32, pageOrder);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PageDataDTO_hpp */




