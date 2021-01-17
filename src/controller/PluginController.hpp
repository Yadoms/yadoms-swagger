#ifndef PluginController_hpp
#define PluginController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/plugin/AvailablePluginsResponseDTO.hpp"
#include "dto/plugin/AvailablePluginsParameterizedResponseDTO.hpp"
#include "dto/plugin/FieldsBodyDTO.hpp"
#include "dto/plugin/AvailablePluginsWithPackageResponseDTO.hpp"
#include "dto/plugin/PluginsInstanceResponseDTO.hpp"
#include "dto/plugin/PluginsInstanceWithStateResponseDTO.hpp"
#include "dto/plugin/OnePluginResponseDTO.hpp"
#include "dto/plugin/PluginStateResponseDTO.hpp"
#include "dto/plugin/PluginDevicesResponseDTO.hpp"
#include "dto/plugin/InstanceLogResponseDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
#include "dto/plugin/InstanceRunningResponseDTO.hpp"
#include "dto/plugin/PluginDeviceBodyDTO.hpp"
#include "dto/shared/EmptyObjectDTO.hpp"
#include "dto/shared/TaskIdResponseDTO.hpp"
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

   ENDPOINT_INFO(getAllAvailablePluginsWithPackage)
   {
      info->addTag("Plugin");
      info->summary = "Get All Available Plugins with package";
      info->description = "Get All Available Plugins with package";
      info->addResponse<Object<AvailablePluginsWithPackageResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/withPackage", getAllAvailablePluginsWithPackage) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllPluginsInstance)
   {
      info->addTag("Plugin");
      info->summary = "Get All Plugins Instance";
      info->description = "Get the plugin instances list";
      info->addResponse<Object<PluginsInstanceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/instance", getAllPluginsInstance) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllPluginsInstanceWithState)
   {
      info->addTag("Plugin");
      info->summary = "Get All Plugins Instance With State";
      info->description = "Get the plugin instances list with state";
      info->addResponse<Object<PluginsInstanceWithStateResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/instanceWithState", getAllPluginsInstanceWithState) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllPluginsInstanceForManualDeviceCreation)
   {
      info->addTag("Plugin");
      info->summary = "Get All Manual Device Creation Plugins Instance";
      info->description = "Get All Manual Device Creation Plugins Instance";
      info->addResponse<Object<PluginsInstanceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/instance/handleManuallyDeviceCreation", getAllPluginsInstanceForManualDeviceCreation) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getOnePlugin)
   {
      info->addTag("Plugin");
      info->summary = "Get plugin instance configuration";
      info->description = "Get plugin instance configuration";
      info->addResponse<Object<OnePluginResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}", getOnePlugin, 
            PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getInstanceState)
   {
      info->addTag("Plugin");
      info->summary = "Get the state of a particular instance of plugin";
      info->description = "Get the state of a particular instance of plugin";
      info->addResponse<Object<PluginStateResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}/state", getInstanceState,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getPluginDevices)
   {
      info->addTag("Plugin");
      info->summary = "Get Plugin Devices";
      info->description = "List all devices attached to a plugin instance";
      info->addResponse<Object<PluginDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}/devices", getPluginDevices,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getInstanceLog)
   {
      info->addTag("Plugin");
      info->summary = "Get plugin instance log";
      info->description = "Get the log of a plugin instance";
      info->addResponse<Object<InstanceLogResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}/log", getInstanceLog,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getBinding)
   {
      info->addTag("Plugin");
      info->summary = "Get plugin binding";
      std::string description;
      description.append("Get plugin binding");
      description.append("\n\n");
      description.append("QueryName could be found in plugin package.in.json under extraQueries field");
      info->description = description.c_str();
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}/binding/{queryName}", getBinding,
      PATH(Int32, pluginId), PATH(String, queryName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(startInstance)
   {
      info->addTag("Plugin");
      info->summary = "Start a plugin Instance";
      info->description = "Start a registered instance of plugin";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/plugin/{pluginId}/start", startInstance,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(stopInstance)
   {
      info->addTag("Plugin");
      info->summary = "Stop a plugin Instance";
      info->description = "Stop the instance and wait for stopped";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/plugin/{pluginId}/stop", stopInstance,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getInstanceRunning)
   {
      info->addTag("Plugin");
      info->summary = "Get plugin instance state";
      info->description = "Get the running state of a particular instance of plugin";
      info->addResponse<Object<InstanceRunningResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/plugin/{pluginId}/instanceRunning", getInstanceRunning,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(createPlugin)
   {
      info->addTag("Plugin");
      info->summary = "Create a new plugin instance";
      info->description = "Create a new instance of a plugin";
      info->addResponse<Object<InstanceRunningResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/plugin", createPlugin, BODY_DTO(Object<PluginInstance>, pluginInstance))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(createDevice)
   {
      info->addTag("Plugin");
      info->summary = "Create a device";
      info->description = "Create a device";
      info->addResponse<Object<OneDeviceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/plugin/{pluginId}/createDevice", 
            createDevice,
            PATH(Int32, pluginId),
            BODY_DTO(Object<PluginDeviceBody>, plugindeviceBody))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updatePlugin)
   {
      info->addTag("Plugin");
      info->summary = "Update a plugin Instance";
      info->description = "Update plugin instance informations";
      info->addResponse<Object<OnePluginResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/plugin/{pluginId}", updatePlugin,
      PATH(Int32, pluginId), 
      BODY_DTO(Object<PluginInstance>, pluginInstanceBody))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(sendExtraQuery)
   {
      info->addTag("Plugin");
      info->summary = "Send an extra command";
      info->description = "Send an extra command";
      info->body.description = "Extra Query Data";
      info->body.required = false;
      info->addConsumes<Object<EmptyObject>>(
         "application/json",
         ""
         );

      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/plugin/{pluginId}/extraQuery/{extraQueryName}", 
      sendExtraQuery,
      PATH(Int32, pluginId),
      PATH(String, extraQueryName))
   {
     
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(sendDeviceExtraQuery)
   {
      info->addTag("Plugin");
      info->summary = "Send a device extra command";
      info->description = "Send a device extra command";
      info->body.description = "Extra Query Data";
      info->body.required = false;
      info->addConsumes<Object<EmptyObject>>(
         "application/json",
         ""
         );

      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/plugin/{pluginId}/deviceExtraQuery/{deviceId}/{extraQueryName}",
      sendDeviceExtraQuery,
      PATH(Int32, pluginId),
      PATH(Int32, deviceId),
      PATH(String, extraQueryName))
   {

      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteAllPlugins)
   {
      info->addTag("Plugin");
      info->summary = "Delete all plugins";
      info->description = "Delete all plugins";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/plugin", deleteAllPlugins)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deletePlugin)
   {
      info->addTag("Plugin");
      info->summary = "Delete a plugin";
      info->description = "Delete a plugin";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/plugin/{pluginId}",
      deletePlugin,
      PATH(Int32, pluginId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* PluginController_hpp */