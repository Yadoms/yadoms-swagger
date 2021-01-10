#ifndef PageController_hpp
#define PageController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/page/PagesResponseDTO.hpp"
#include "dto/page/PageResponseDTO.hpp"
#include "dto/shared/WidgetsResponseDTO.hpp"
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

   ENDPOINT_INFO(getPageWidget)
   {
      info->addTag("Page");
      info->summary = "Get page widget";
      info->description = "List all widgets instanciated in a page";
      info->addResponse<Object<WidgetsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/page/{pageId}/widget", getPageWidget,
      PATH(Int32, pageId)) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(addPage)
   {
      info->addTag("Page");
      info->summary = "Add page";
      info->description = "Add new page ";
      info->addResponse<Object<PageResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/page/", addPage,
      BODY_DTO(Object<PageData>, page)) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateAllPages)
   {
      info->addTag("Page");
      info->summary = "update All Pages";
      info->description = "update All Pages";
      info->addResponse<Object<PagesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/page", updateAllPages,
      BODY_DTO(oatpp::Vector<Object<PageData>>, pagesData)) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updatePage)
   {
      info->addTag("Page");
      info->summary = "update a Page";
      info->description = "update All Pages";
      info->addResponse<Object<PageResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/page/{pageId}", updatePage,
      BODY_DTO(Object<PageData>, pageData), 
      PATH(Int32, pageId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PageController_hpp */