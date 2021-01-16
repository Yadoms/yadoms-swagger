#ifndef SystemController_hpp
#define SystemController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/system/SystemBindingQueryTypeDTO.hpp"
#include "dto/system/SerialPortsResponseDTO.hpp"
#include "dto/system/NetworkInterfacesResponseDTO.hpp"
#include "dto/system/NetworkInterfacesWithoutLoopbackResponseDTO.hpp"
#include "dto/system/ResultResponseDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"
#include "dto/system/SystemInformationResponseDTO.hpp"
#include "dto/system/CurrentTimeResponseDTO.hpp"
#include "dto/system/CapacitiesResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CSystemController : public oatpp::web::server::api::ApiController
{
public:
   CSystemController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getBinding)
   {
      info->addTag("System");
      info->summary = "Get System Binding";
      info->description = "Get System Binding \n\n Warning : All responses code is 200";
      info->addResponse<Object<SerialPortsResponse>>(
         Status::CODE_200,
         "application/json",
         "serial ports response"
         );
      info->addResponse<Object<NetworkInterfacesResponse>>(
         Status::CODE_201,
         "application/json",
         "Network Interfaces response"
         );

      info->addResponse<Object<NetworkInterfacesWithoutLoopbackResponse>>(
         Status::CODE_202,
         "application/json",
         "Network Interfaces without loopback response"
         );

      info->addResponse<Object<ResultResponse>>(
         Status::CODE_203,
         "application/json",
         "Platforms response"
         );

      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_203,
         "application/json",
         "Supported Timezones response, return A list of all supported timezones"
         );
   }
   ENDPOINT("GET", "/system/binding/{bindingId}", getBinding,
      PATH(Enum<SystemBindingQueryType>, bindingId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getSystemInformation)
   {
      info->addTag("System");
      info->summary = "Get System Information";
      info->description = "Get System Information";
    
      info->addResponse<Object<SystemInformationResponse>>(
         Status::CODE_203,
         "application/json",
         ""
         );
   }
   ENDPOINT("GET", "/system/information", getSystemInformation)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getCurrentTime)
   {
      info->addTag("System");
      info->summary = "Get Current Time";
      info->description = "Get Current Time";

      info->addResponse<Object<CurrentTimeResponse>>(
         Status::CODE_203,
         "application/json",
         ""
         );
   }
   ENDPOINT("GET", "/system/currentTime", getCurrentTime)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getVirtualDevicesSupportedCapacities)
   {
      info->addTag("System");
      info->summary = "Get Virtual Devices Supported Capacities";
      info->description = "Get Virtual Devices Supported Capacities";

      info->addResponse<Object<CapacitiesResponse>>(
         Status::CODE_203,
         "application/json",
         ""
         );
   }
   ENDPOINT("GET", "/system/virtualDevicesSupportedCapacities", getVirtualDevicesSupportedCapacities)
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* SystemController_hpp */