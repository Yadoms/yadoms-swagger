#ifndef AutomationController_hpp
#define AutomationController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/automation/AllInterpretersResponseDTO.hpp"

#include OATPP_CODEGEN_BEGIN(ApiController)

class CAutomationController : public oatpp::web::server::api::ApiController
{
public:

   CAutomationController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(getAllInterpreters)
   {
      info->addTag("Automation");
      info->summary = "All Interpreters";
      info->description = "Get all interpreters";
      info->addResponse<Object<AllInterpretersResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/automation/interpreter", getAllInterpreters)
   {
      return createResponse(Status::CODE_200, "OK");
   }

};
#include OATPP_CODEGEN_END(ApiController)
#endif /* CAcquisitionController_hpp */