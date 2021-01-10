#ifndef PageController_hpp
#define PageController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/page/PagesResponseDTO.hpp"
#include "dto/page/PageResponseDTO.hpp"
#include "dto/shared/WidgetsResponseDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
#include "dto/shared/WidgetResponseDTO.hpp"
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
   ENDPOINT("POST", "/page", addPage,
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
      BODY_DTO(oatpp::Vector<Object<PageData>>, pagesData))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updatePage)
   {
      info->addTag("Page");
      info->summary = "update a Page";
      info->description = "update a Page";
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

   ENDPOINT_INFO(deletePage)
   {
      info->addTag("Page");
      info->summary = "delete a Page";
      info->description = "delete a Page";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/page/{pageId}", deletePage,
            PATH(Int32, pageId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteAllPages)
   {
      info->addTag("Page");
      info->summary = "delete all Pages";
      info->description = "delete all Pages";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/page", deleteAllPages)
   {
      return createResponse(Status::CODE_200, "OK");
   }
   // TODO : WARNING : PageId is not used, pageId is injected by the body
   ENDPOINT_INFO(addWidgetForPage)
   {
      info->addTag("Page");
      info->summary = "Add new widget to a page";
      std::string description;
      description.append("Add new widget to a page ");
      description.append("\n");
      description.append(" * configuration Field is a container (Multiple configuration format)");

      info->description = description.c_str();
      info->addResponse<Object<WidgetResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/page/widget/{pageId}", addWidgetForPage,
      BODY_DTO(Object<WidgetData>, widgetData),
      PATH(Int32, pageId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(replaceAllWidgetsForPage)
   {
      info->addTag("Page");
      info->summary = "Replace All Widgets For a Page";
      info->description = "Replace All Widgets For a Page";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/page/{pageId}", replaceAllWidgetsForPage,
      BODY_DTO(oatpp::Vector<Object<WidgetData>>, widgetsData),
      PATH(Int32, pageId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteAllWidgetsForPage)
   {
      info->addTag("Page");
      info->summary = "Delete All Widgets For a Page";
      info->description = "Delete All Widgets For a Page";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("DELETE", "/page/{pageId}", deleteAllWidgetsForPage,
      PATH(Int32, pageId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PageController_hpp */