#ifndef MaintenanceController_hpp
#define MaintenanceController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/maintenance/DatabaseInformationResponseDTO.hpp"
#include "dto/maintenance/BackupsResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CMaintenanceController : public oatpp::web::server::api::ApiController
{
public:
   CMaintenanceController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(getDatabaseInformation)
   {
      info->addTag("Maintenance");
      info->summary = "Get database system information";
      info->description = "Get database system information";
      info->addResponse<Object<DatabaseInformationResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/maintenance/information", getDatabaseInformation) {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getBackups)
   {
      info->addTag("Maintenance");
      info->summary = "get Backups";
      info->description = "get Backups";
      info->addResponse<Object<BackupsResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/maintenance/backup", getBackups) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* MaintenanceController_hpp */