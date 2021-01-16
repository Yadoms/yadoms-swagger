#ifndef RecipientController_hpp
#define RecipientController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/recipient/RecipientsResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CRecipientController : public oatpp::web::server::api::ApiController
{
public:
   CRecipientController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(getAllRecipients)
   {
      info->addTag("Recipient");
      info->summary = "Get all recipients";
      info->description = "List all recipients";
      info->addResponse<Object<RecipientsResponseResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/recipient", getAllRecipients) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* RecipientController_hpp */