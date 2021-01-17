#ifndef UpdateController_hpp
#define UpdateController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/shared/TaskIdResponseDTO.hpp"
#include "dto/shared/PreReleasesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/update/AvailableUpdatesResponseDTO.hpp"

class CUpdateController : public oatpp::web::server::api::ApiController
{
public:
   CUpdateController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(scanForUpdates)
   {
      info->addTag("Update");
      info->summary = "Scan for updates";
      info->description = "Scan for updates";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/update/scan", scanForUpdates) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(availableUpdates)
   {
      info->addTag("Update");
      info->summary = "Get available updates";
      info->description = "Get available updates";
      info->addResponse<Object<AvailableUpdatesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/update/list/{includePrereleases}", availableUpdates,
      PATH(Enum<PreReleases>, preReleases))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateYadoms)
   {
      info->addTag("Update");
      info->summary = "Update yadoms";
      info->description = "Update yadoms";
      info->addResponse<Object<TaskIdResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/update/yadoms/update", updateYadoms, BODY_DTO(Object<DownloadUrl>, downloadUrl))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* UpdateController_hpp */