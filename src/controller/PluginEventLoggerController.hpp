#ifndef PluginEventLoggerController_hpp
#define PluginEventLoggerController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/pluginEventLogger/PluginEventResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CPluginEventLoggerController : public oatpp::web::server::api::ApiController
{
public:
   CPluginEventLoggerController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getLogsForPluginName)
   {
      info->addTag("Plugin Event Logger");
      info->summary = "Get Plugin logs";
      info->description = "Get the events history for a plugin";
      info->pathParams["fromDate"].required = false;
      info->pathParams["fromDate"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201230T102659)";
      info->addResponse<Object<PluginEventLoggerResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/pluginEventLogger/{pluginName}/{fromDate}", getLogsForPluginName,
      PATH(String, pluginName),
      PATH(String, fromDate))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PluginEventLoggerController_hpp */