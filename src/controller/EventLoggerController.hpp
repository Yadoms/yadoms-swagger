#ifndef EventLoggerController_hpp
#define EventLoggerController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/eventLogger/EventsResponseDTO.hpp"

class CEventLoggerController : public oatpp::web::server::api::ApiController
{
public:

   CEventLoggerController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(getEvents)
   {
      info->addTag("Event Logger");
      info->summary = "Get the events history";
      info->description = "Get the events history";
      info->addResponse<Object<EventsResponse>>(
         Status::CODE_200,
         "application/json");
   }

   ENDPOINT("Get", "/EventLogger", getEvents)
   {
      return createResponse(Status::CODE_200, "OK");
   }
};

#include OATPP_CODEGEN_END(ApiController)
#endif /* DeviceController_hpp */