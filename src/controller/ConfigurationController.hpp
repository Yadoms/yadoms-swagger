#ifndef ConfigurationController_hpp
#define ConfigurationController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/configuration/ServerConfigurationResponseDTO.hpp"
#include "dto/configuration/SaveServerConfigurationBody.hpp"
#include "dto/shared/SimpleResponseDTO.hpp"
#include "dto/configuration/ExternalSectionTypeDTO.hpp"
#include "dto/configuration/ExternalConfigurationBodyDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
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

   ENDPOINT_INFO(resetServerConfiguration)
   {
      info->addTag("Configuration");
      info->summary = "Reset server configuration";
      info->description = "Reset server configuration";
      info->addResponse<Object<ServerConfigurationResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/configuration/server/reset", resetServerConfiguration)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(saveServerConfiguration)
   {
      info->addTag("Configuration");
      info->summary = "Save server configuration";
      info->description = "Save server configuration";
      info->addConsumes<Object<SaveServerConfigurationBody>>(
         "application/json"
         );
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/configuration/server", saveServerConfiguration)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDatabaseVersion)
   {
      info->addTag("Configuration");
      info->summary = "Get Database Version";
      info->description = "Get Database Version";
      info->addResponse<Object<SimpleResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("Get", "/configuration/databaseVersion", getDatabaseVersion)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getExternalConfiguration)
   {
      info->addTag("Configuration");
      info->summary = "Get External Configuration";
      info->description = "Get External Configuration";
      info->addResponse<Object<SimpleResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("Get", "/configuration/external/{externalSectionName}", getExternalConfiguration,
      PATH(Enum<ExternalSectionType>, externalSectionName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(saveExternalConfiguration)
   {
      info->addTag("Configuration");
      info->summary = "Save External Configuration";
      info->description = "Save External Configuration";
      info->addConsumes<Object<ExternalConfigurationBody>>(
         "application/json"
         );
      info->addResponse<Object<SimpleResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/configuration/external/{externalSectionName}", saveExternalConfiguration)
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* ConfigurationController_hpp */