#ifndef DeviceController_hpp
#define DeviceController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/device/AllDevicesResponseDTO.hpp"
#include "dto/device/OneDeviceResponseDTO.hpp"
#include "dto/device/CompatibleForMergeDeviceDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
#include "dto/shared/KeywordDataTypeDTO.hpp"
#include "dto/device/AllKeywordsResponseDTO.hpp"
#include "dto/device/KeywordResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CDeviceController : public oatpp::web::server::api::ApiController
{
public:

   CDeviceController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllDevices)
   {
      info->addTag("Device");
      info->summary = "Get all devices";
      info->description = "Get all devices";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device", getAllDevices)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getOneDevice)
   {
      info->addTag("Device");
      info->summary = "Get one device";
      info->description = "Get one device";
      info->addResponse<Object<OneDeviceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/{deviceId}", getOneDevice,
            PATH(Int32,deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getCompatibleForMergeDevice)
   {
      info->addTag("Device");
      info->summary = "Get Compatible Device For Merge";
      std::string des;
      des.append("Get Compatible Device For Merge\n");
      des.append("A device is compatible for merge with an other when : \n");
      des.append("- Plugins are compatible(A device is compatible for merge with an other when pluginId and type are the same) \n");
      des.append("- They contain at least one compatible keyword. Keywords are compatible when : \n");
      des.append("- capacityName, accessMode, name, type, units, typeInfo, measure and details are the same");
      info->description = des.c_str();
      info->addResponse<Object<CompatibleForMergeDeviceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/{deviceId}/compatibleForMergeDevice", getCompatibleForMergeDevice,
      PATH(Int32, deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceConfigurationSchema)
   {
      info->addTag("Device");
      info->summary = "Get Device Configuration Schema";
      info->description = "Get Device Configuration Schema";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/{deviceId}/configurationSchema", getDeviceConfigurationSchema,
      PATH(Int32, deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllKeywords)
   {
      info->addTag("Device");
      info->summary = "Get all keywords";
      info->description = "Get all keywords";
      info->addResponse<Object<AllKeywordsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/keyword", getAllKeywords)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeyword)
   {
      info->addTag("Device");
      info->summary = "Get a keyword";
      info->description = "Get a keyword";
      info->addResponse<Object<KeywordResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/keyword/{keywordId}", getKeyword, 
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDevicesWithCapacity)
   {
      info->addTag("Device");
      info->summary = "Get devices with capacity";
      info->description = "Get the device list which support a capacity";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/matchcapacity/{keywordAccessMode}/{capacityName}", getDevicesWithCapacity,
      PATH(Enum<KeywordAccessMode>, keywordAccessMode), PATH(String, capacityName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceWithCapacityType)
   {
      info->addTag("Device");
      info->summary = "Get devices with capacity Type";
      info->description = "Get the device list which support a capacity";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/matchcapacitytype/{keywordAccessMode}/{keywordDataType}", getDeviceWithCapacityType,
      PATH(Enum<KeywordAccessMode>, keywordAccessMode), PATH(Enum<KeywordDataType>, keywordDataType))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* DeviceController_hpp */