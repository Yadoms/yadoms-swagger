#ifndef CAcquisitionController_hpp
#define CAcquisitionController_hpp

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/DTOs.hpp"
#include "dto/acquisition/AcquisitionKeywordLastDataDTO.hpp"
#include "dto/acquisition/KeywordsDTO.hpp"

#include OATPP_CODEGEN_BEGIN(ApiController)

class CAcquisitionController : public oatpp::web::server::api::ApiController
{
public:

   CAcquisitionController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }

   ENDPOINT_INFO(getKeywordListLastData)
   {
      info->addTag("Keyword List Last data");
      info->description = "Get the last acquisition for a list of keywords passed as a body";

      info->addResponse<Object<AcquisitionKeywordLastData>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/lastdata", getKeywordListLastData,
            BODY_DTO(Object<Keywords>, keywords))
   {
      return createResponse(Status::CODE_200, "ok");
   }

   ENDPOINT_INFO(getKeywordListInfo)
   {
      info->addTag("Keyword List info");
      info->description = "Get the last acquisition for a list of keywords passed as a parameter";
      info->addResponse<Object<MyDto>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/info", getKeywordListInfo,
         BODY_DTO(Object<Keywords>, keywords))
   {
      auto dto = MyDto::createShared();
      dto->statusCode = 200;
      dto->message = "Hello World!";
      return createDtoResponse(Status::CODE_200, dto);
   }
};

#include OATPP_CODEGEN_END(ApiController)

#endif /* CAcquisitionController_hpp */
