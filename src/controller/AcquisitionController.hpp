#ifndef CAcquisitionController_hpp
#define CAcquisitionController_hpp

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/acquisition/KeywordsLastDataResponseDTO.hpp"
#include "dto/acquisition/KeywordsLastDataBodyDTO.hpp"
#include "dto/acquisition/KeywordsListInfoBodyDTO.hpp"
#include "dto/acquisition/KeywordsListInfoResponseDTO.hpp"
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
      info->addResponse<Object<KeywordsLastDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/lastdata", getKeywordListLastData,
            BODY_DTO(Object<KeywordsLastDataBody>, keywords))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordListInfo)
   {
      info->addTag("Keyword List info");
      info->description = "Get the last acquisition for a list of keywords passed as a parameter";
      info->addResponse<Object<KeywordListInfoResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/info", getKeywordListInfo,
         BODY_DTO(Object<KeywordsListInfoBody>, keywords))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};

#include OATPP_CODEGEN_END(ApiController)

#endif /* CAcquisitionController_hpp */
