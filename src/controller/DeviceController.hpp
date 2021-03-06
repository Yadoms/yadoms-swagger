﻿#ifndef DeviceController_hpp
#define DeviceController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/device/AllDevicesResponseDTO.hpp"
#include "dto/device/OneDeviceResponseDTO.hpp"
#include "dto/device/CompatibleForMergeDeviceDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
#include "dto/shared/KeywordDataTypeDTO.hpp"
#include "dto/shared/RemoveDeviceDTO.hpp"
#include "dto/device/AllKeywordsResponseDTO.hpp"
#include "dto/device/KeywordResponseDTO.hpp"
#include "dto/device/DeviceMatchKeywordCriteriaBodyDTO.hpp"
#include "dto/device/KeywordsResponseDTO.hpp"
#include "dto/device/KeywordsLastStateBodyDTO.hpp"
#include "dto/device/KeywordsLastStateResponseDTO.hpp"
#include "dto/device/DeviceDataToUpdateDTO.hpp"
#include "dto/device/mergeDevicesBodyDTO.hpp"
#include "dto/device/FriendlyNameDTO.hpp"
#include "dto/device/BlacklistDTO.hpp"
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
      info->addResponse<Object<KeywordsResponse>>(
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
      info->description = "Get the device list which support a capacity type";
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

   ENDPOINT_INFO(getDeviceWithKeywordAccessMode)
   {
      info->addTag("Device");
      info->summary = "Get device with Keyword Access Mode";
      info->description = "Get the device list which contains at least one keyword with matching access mode";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/matchkeywordaccess/{keywordAccessMode}", getDeviceWithKeywordAccessMode,
      PATH(Enum<KeywordAccessMode>, keywordAccessMode))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceWithKeywordHistoryDepth)
   {
      info->addTag("Device");
      info->summary = "Get device with Keyword History Depth";
      info->description = "Get the device list which contains at least one keyword with matching history depth policy";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/matchkeywordhistorydepth/{historyDepth}", getDeviceWithKeywordHistoryDepth,
      PATH(Enum<HistoryDepth>, historyDepth))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceMatchKeywordCriteria)
   {
      info->addTag("Device");
      info->summary = "Get all devices matching some criteria on keywords";
      info->description = "Get all devices matching some criteria on keywords. \n At least one expected value needed";
      info->addResponse<Object<AllDevicesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/device/matchkeywordcriteria", getDeviceMatchKeywordCriteria, 
      BODY_DTO(Object<DeviceMatchKeywordCriteria>, interpreterName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceKeywordsForCapacity)
   {
      info->addTag("Device");
      info->summary = "Get all keywords which match capacity for a device";
      info->description = "List all keywords which match capacity for a device";
      info->addResponse<Object<KeywordResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/{deviceId}/{keywordAccessMode}/{capacityName}", getDeviceKeywordsForCapacity,
      PATH(Int32, deviceId),
      PATH(Enum<KeywordAccessMode>, keywordAccessMode),
      PATH(String, capacityName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getDeviceKeywords)
   {
      info->addTag("Device");
      info->summary = "Get Device keywords";
      info->description = "List all keywords for a device";
      info->addResponse<Object<KeywordResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/device/{deviceId}/keyword", getDeviceKeywords,
      PATH(Int32, deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordsLastState)
   {
      info->addTag("Device");
      info->summary = "Get Keywords Last State";
      info->description = "Get the last data of a keywords list";
      info->addResponse<Object<KeywordsLastStateResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/device/keywordslastvalue", getKeywordsLastState,
      BODY_DTO(Object<KeywordsLastStateBody>, KeywordsLastState))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateDeviceConfiguration)
   {
      info->addTag("Device");
      info->summary = "Get Keywords Last State";
      info->description = "Get the last data of a keywords list";
      info->addResponse<Object<OneDeviceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/device/{deviceId}/configuration", updateDeviceConfiguration,
      BODY_DTO(Object<DeviceDataToUpdate>, deviceData), PATH(Int32, deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(mergeDevices)
   {
      info->addTag("Device");
      info->summary = "merge Devices";
      info->description = "merge Devices";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/device/merge", mergeDevices,
      BODY_DTO(Object<MergeDevicesBody>, deviceData))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(restoreDevice)
   {
      info->addTag("Device");
      info->summary = "restore device";
      info->description = "Update the device blacklist state";
      info->addResponse<Object<OneDeviceResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/device/{deviceId}/restore", restoreDevice,
      PATH(Int32, deviceId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateKeywordFriendlyName)
   {
      info->addTag("Device");
      info->summary = "update Keyword FriendlyName";
      info->description = "update Keyword FriendlyName";
      info->addResponse<Object<KeywordsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/device/keyword/{keywordId}", updateKeywordFriendlyName,
      PATH(Int32, keywordId), 
      BODY_DTO(Object<FriendlyName>, friendlyName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateKeywordBlacklist)
   {
      info->addTag("Device");
      info->summary = "update Keyword Blacklist";
      info->description = "update Keyword Blacklist";
      info->addResponse<Object<KeywordsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("PUT", "/device/keyword/{keywordId}/blacklist", updateKeywordBlacklist,
      PATH(Int32, keywordId),
      BODY_DTO(Object<Blacklist>, blacklist))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(sendKeywordCommand)
   {
      info->addTag("Device");
      info->summary = "send Keyword Command";
      info->description = "Send a command to a keyword";
      info->addResponse< Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/device/keyword/{keywordId}/command", sendKeywordCommand,
      PATH(Int32, keywordId),
      BODY_DTO(Fields<String>, command))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteDevice)
   {
      info->addTag("Device");
      info->summary = "delete a Device";
      info->description = "delete a Device";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("DELETE", "/device/{deviceId}/{removeDevice}", deleteDevice,
      PATH(Int32, deviceId),
      PATH(Enum<RemoveDevice>, removeDevice))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* DeviceController_hpp */