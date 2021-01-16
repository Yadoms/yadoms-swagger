#ifndef TaskController_hpp
#define TaskController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/task/TasksResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CTaskController : public oatpp::web::server::api::ApiController
{
public:
   CTaskController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllTasks)
   {
      info->addTag("Task");
      info->summary = "Get all tasks";
      info->description = "List all tasks";
      info->addResponse<Object<TaskResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/task", getAllTasks) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* TaskController_hpp */