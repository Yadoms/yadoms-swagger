#ifndef PluginController_hpp
#define PluginController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/plugin/AvailablePluginsResponseDTO.hpp"
#include "dto/plugin/AvailablePluginsParameterizedResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/plugin/FieldsBodyDTO.hpp"

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
      info->addResponse<Object<AvailablePluginsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin", getAllAvailablePlugins) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllAvailablePluginsParameterized)
   {
      info->addTag("Plugin");
      info->summary = "Get All Available Plugins Parameterized";
      std::string description;
      description.append("Get All Available Plugins Parameterized");
      description.append("\n\n");
      description.append("This allows you to find all the given fields of all available plugins (from their package.json)");
      info->description = description.c_str();

      auto fields = FieldsBody::createShared();
      fields->fields = oatpp::Vector<oatpp::String>({ "version", "author", "type", "credits", "url", "supportedPlatforms", "dependencies", "configurationSchema"});
      info->body.addExample("fields", fields);

      info->addResponse<Object<AvailablePluginsParameterizedResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/plugin", getAllAvailablePluginsParameterized, 
      BODY_DTO(Object<FieldsBody>, fields))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PluginController_hpp */