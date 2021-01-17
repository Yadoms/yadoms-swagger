#ifndef UpdateController_hpp
#define UpdateController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/shared/TaskIdResponseDTO.hpp"
#include "dto/shared/PreReleasesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/update/AvailableUpdatesResponseDTO.hpp"

class CUpdateController : public oatpp::web::server::api::ApiController
{
public:
   CUpdateController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(scanForUpdates)
   {
      info->addTag("Update");
      info->summary = "Scan for updates";
      info->description = "Scan for updates";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("POST", "/update/scan", scanForUpdates)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(availableUpdates)
   {
      info->addTag("Update");
      info->summary = "Get available updates";
      info->description = "Get available updates";
      info->addResponse<Object<AvailableUpdatesResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("GET", "/update/list/{includePrereleases}", availableUpdates,
            PATH(Enum<PreReleases>, includePrereleases))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateYadoms)
   {
      info->addTag("Update");
      info->summary = "Update yadoms";
      info->description = "Update yadoms";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("POST", "/update/yadoms/update", updateYadoms, BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateWidget)
   {
      info->addTag("Update");
      info->summary = "Update a widget";
      info->description = "Update a widget";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("POST", "/update/widget/update/{widgetName}", updateWidget, PATH(String, widgetName),
            BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(installWidget)
   {
      info->addTag("Update");
      info->summary = "Install a widget";
      info->description = "Install a widget";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/widget/install", installWidget,
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }


   ENDPOINT_INFO(removeWidget)
   {
      info->addTag("Update");
      info->summary = "Remove a widget";
      info->description = "Remove a widget";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/widget/remove/{widgetName}", removeWidget, PATH(String, widgetName),
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updatePluginVersion)
   {
      info->addTag("Update");
      info->summary = "Update a plugin";
      info->description = "Update a plugin";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/plugin/update/{pluginName}", updatePluginVersion, PATH(String, pluginName),
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(installPlugin)
   {
      info->addTag("Update");
      info->summary = "Install a plugin";
      info->description = "Install a plugin";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/plugin/install", installPlugin,
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(removePlugin)
   {
      info->addTag("Update");
      info->summary = "Remove a plugin";
      info->description = "Remove a plugin";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/plugin/remove/{pluginName}", removePlugin, PATH(String, pluginName),
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateScriptInterpreter)
   {
      info->addTag("Update");
      info->summary = "Update a ScriptInterpreter";
      info->description = "Update a ScriptInterpreter";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/scriptInterpreter/update/{scriptInterpreterName}", updateScriptInterpreter, PATH(String, scriptInterpreterName),
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(installScriptInterpreter)
   {
      info->addTag("Update");
      info->summary = "Install a ScriptInterpreter";
      info->description = "Install a ScriptInterpreter";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/scriptInterpreter/install", installScriptInterpreter,
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }


   ENDPOINT_INFO(removeScriptInterpreter)
   {
      info->addTag("Update");
      info->summary = "Remove a ScriptInterpreter";
      info->description = "Remove a ScriptInterpreter";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/update/scriptInterpreter/remove/{scriptInterpreterName}", removeScriptInterpreter, PATH(String, scriptInterpreterName),
      BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};

#include OATPP_CODEGEN_END(ApiController)
#endif /* UpdateController_hpp */
