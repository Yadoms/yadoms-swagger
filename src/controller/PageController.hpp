#ifndef PageController_hpp
#define PageController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/page/PagesResponseDTO.hpp"
#include "dto/page/PageResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CPageController : public oatpp::web::server::api::ApiController
{
public:
   CPageController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllPages)
   {
      info->addTag("Page");
      info->summary = "Get all pages";
      info->description = "List all pages";
      info->addResponse<Object<PagesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/page", getAllPages) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getOnePage)
   {
      info->addTag("Page");
      info->summary = "Get one page";
      info->description = "Get page informations";
      info->addResponse<Object<PageResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/page/{pageId}", getOnePage, 
            PATH(Int32, pageId)) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PageController_hpp */