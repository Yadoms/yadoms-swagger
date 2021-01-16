#ifndef RecipientController_hpp
#define RecipientController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/recipient/RecipientsResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "dto/recipient/RecipientResponseDTO.hpp"
#include "dto/shared/EmptyResponseDTO.hpp"

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

   ENDPOINT_INFO(getOneRecipient)
   {
      info->addTag("Recipient");
      info->summary = "Get one recipient";
      info->description = "Get one recipient";
      info->addResponse<Object<RecipientResponseResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/recipient/{recipientId}", getOneRecipient,
            PATH(Int32, recipientId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(removeAllRecipients)
   {
      info->addTag("Recipient");
      info->summary = "Remove all recipients";
      info->description = "Remove all recipients";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/recipient", removeAllRecipients)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(removeOneRecipient)
   {
      info->addTag("Recipient");
      info->summary = "Remove one recipient";
      info->description = "Remove one recipient";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("DELETE", "/recipient/{recipientId}", removeOneRecipient,
      PATH(Int32, recipientId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(addRecipient)
   {
      info->addTag("Recipient");
      info->summary = "Add a new recipient";
      info->description = "Add a new recipient";
      info->addResponse<Object<RecipientResponseResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("POST", "/recipient", addRecipient,
      BODY_DTO(Object<RecipientData>, recipientData))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(updateRecipient)
   {
      info->addTag("Recipient");
      info->summary = "Update a recipient";
      info->description = "Update a recipient";
      info->addResponse<Object<RecipientResponseResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("PUT", "/recipient/{recipientId}", updateRecipient,
      PATH(Int32, recipientId),
      BODY_DTO(Object<RecipientData>, recipientData))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* RecipientController_hpp */