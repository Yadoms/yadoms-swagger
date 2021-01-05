#ifndef DeviceController_hpp
#define DeviceController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/device/AllDevicesResponseDTO.hpp"
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
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* DeviceController_hpp */