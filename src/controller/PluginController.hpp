#ifndef PluginController_hpp
#define PluginController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/plugin/PluginsResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CPluginController : public oatpp::web::server::api::ApiController
{
public:
   CPluginController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllAvailablePlugins)
   {
      info->addTag("Plugin");
      info->summary = "Get All Available Plugins";
      info->description = "Get All Available Plugins";
      info->addResponse<Object<PluginsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin", getAllAvailablePlugins) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PluginController_hpp */