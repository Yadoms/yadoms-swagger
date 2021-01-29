#ifndef WidgetController_hpp
#define WidgetController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/shared/WidgetsResponseDTO.hpp"
#include "dto/shared/WidgetResponseDTO.hpp"
#include "dto/widget/PackageResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/shared/EmptyResponseDTO.hpp"

class CWidgetController : public oatpp::web::server::api::ApiController
{
public:
   CWidgetController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllWidgets)
   {
      info->addTag("Widget");
      info->summary = "Get all widgets";
      info->description = "List all widgets";
      info->addResponse<Object<WidgetsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/widget", getAllWidgets) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getOneWidget)
   {
      info->addTag("Widget");
      info->summary = "Get one widget";
      info->description = "Get widget informations";
      info->addResponse<Object<WidgetResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/widget/{widgetId}", getOneWidget,
      PATH(Int32, widgetId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(findWidgetPackages)
   {
      info->addTag("Widget");
      info->summary = "Find Widget Packages";
      info->description = "Find Widget Packages";
      info->addResponse<Object<PackageResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/widget/package", findWidgetPackages)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(addWidget)
   {
      info->addTag("Widget");
      info->summary = "Add new widget ";
      info->description = "Add new widget ";
      info->addResponse<Object<WidgetResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/widget", addWidget, 
            BODY_DTO(Object<WidgetData>, widgetData))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateOneWidget)
   {
      info->addTag("Widget");
      info->summary = "Update a widget";
      info->description = "Update a widget";
      info->addResponse<Object<WidgetResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/widget/{widgetId}", updateOneWidget,
            BODY_DTO(Object<WidgetData>, widgetData), 
            PATH(Int32, widgetId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteAllWidgets)
   {
      info->addTag("Widget");
      info->summary = "Delete all widgets";
      info->description = "Delete all widgets";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/widget", deleteAllWidgets)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteOneWidget)
   {
      info->addTag("Widget");
      info->summary = "Delete one widget";
      info->description = "Delete one widget";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/widget/{widgetId}", deleteOneWidget, 
            PATH(Int32, widgetId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* WidgetController_hpp */