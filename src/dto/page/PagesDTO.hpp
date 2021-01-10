#ifndef PagesDTO_hpp
#define PagesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/page/PageDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Pages : public oatpp::DTO
{
   DTO_INIT(Pages, DTO);
   DTO_FIELD(Vector<Object<PageData>>, page);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PagesDTO_hpp */



