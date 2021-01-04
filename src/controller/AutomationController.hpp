#ifndef AutomationController_hpp
#define AutomationController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/automation/AllInterpretersResponseDTO.hpp"
#include "dto/automation/AllRulesResponseDTO.hpp"
#include "dto/automation/RuleCodeTemplateResponseDTO.hpp"
#include "dto/automation/CreateRuleBodyDTO.hpp"
#include "dto/automation/CreateRuleResponseDTO.hpp"
#include "dto/automation/DeleteRuleResponseDTO.hpp"
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

   ENDPOINT_INFO(getAllRules)
   {
      info->addTag("Automation");
      info->summary = "All Rules";
      info->description = "Get All Rules";
      info->addResponse<Object<AllRulesResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/automation/rule", getAllRules)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getRuleCodeTemplate)
   {
      info->addTag("Automation");
      info->summary = "Rule Code Template";
      info->description = "Get rule code template";
      info->pathParams["interpreterName"].description = "Interpreter name (Example : yPython3, yPython2 and code)";
      info->addResponse<Object<RuleCodeTemplateResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("Get", "/automation/rule/{interpreterName}/codeTemplate", getRuleCodeTemplate,
            PATH(String, interpreterName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(createRule)
   {
      info->addTag("Automation");
      info->summary = "Create Rule";
      info->description = "Create Rule";
      info->addResponse<Object<CreateRuleResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("POST", "/automation/rule", createRule,
      BODY_DTO(Object<CreateRuleBody>, interpreterName))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(deleteRule)
   {
      info->addTag("Automation");
      info->summary = "Delete Rule";
      info->description = "Delete Rule";
      info->addResponse<Object<DeleteRuleResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }

   ENDPOINT("DELETE", "/automation/rule/{ruleId}", deleteRule,
      PATH(String, ruleId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* CAcquisitionController_hpp */