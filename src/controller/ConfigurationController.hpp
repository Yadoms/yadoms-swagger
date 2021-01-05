#ifndef ConfigurationController_hpp
#define ConfigurationController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/configuration/ServerConfigurationResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CConfigurationController : public oatpp::web::server::api::ApiController
{
public:

   CConfigurationController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(getServerConfiguration)
   {
      info->addTag("Configuration");
      info->summary = "Get server configuration";
      info->description = "Get server configuration";
      info->addResponse<Object<ServerConfigurationResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("Get", "/configuration/server", getServerConfiguration)
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* ConfigurationController_hpp */