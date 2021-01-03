#ifndef CAcquisitionController_hpp
#define CAcquisitionController_hpp

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/acquisition/KeywordsLastDataResponseDTO.hpp"
#include "dto/acquisition/KeywordsLastDataBodyDTO.hpp"
#include "dto/acquisition/KeywordsListInfoBodyDTO.hpp"
#include "dto/acquisition/KeywordsListInfoResponseDTO.hpp"
#include "dto/acquisition/KeywordInfoBodyDTO.hpp"
#include "dto/acquisition/KeywordInfoResponseDTO.hpp"
#include "dto/acquisition/KeywordLastDataResponseDTO.hpp"
#include "dto/acquisition/AllKeywordDataResponseDTO.hpp"

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
      info->addTag("Acquisition");
      info->summary = "Keyword List Last data";
      info->description = "Get the last acquisition for a list of keywords passed as a body";
      auto keywords = KeywordsLastDataBody::createShared();
      keywords->keywords = oatpp::Vector<oatpp::String>({"212", "215"});
      info->body.example = keywords;

      info->addConsumes<Object<KeywordsLastDataBody>>(
         "application/json"
      );
      info->addResponse<Object<KeywordsLastDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/lastdata", getKeywordListLastData)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordLastData)
   {
      info->addTag("Acquisition");
      info->summary = "Keyword Last data";
      info->description = "Get the last acquisition for a keyword passed as a path";
      info->addResponse<Object<KeywordLastDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/lastdata", getKeywordLastData,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordListInfo)
   {
      info->addTag("Acquisition");
      info->summary = "Keyword List info";
      info->description =
         "Get the last acquisition info for a list of keywords and list of info passed as a body. If the List of info is empty, the response will be the the list of keywords with empty values ";
      auto keywords = KeywordsListInfoBody::createShared();
      keywords->keywords = oatpp::Vector<oatpp::String>({"212", "215"});
      info->body.example = keywords;

      info->addConsumes<Object<KeywordsListInfoBody>>(
         "application/json"
      );
      info->addResponse<Object<KeywordsListInfoResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/info", getKeywordListInfo)
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordInfo)
   {
      info->addTag("Acquisition");
      info->summary = "Keyword info";
      info->description = "Get the last acquisition info (passed as a body) for a keyword passed as a path";
      info->addResponse<Object<KeywordInfoResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("PUT", "/acquisition/keyword/{keywordId}/info", getKeywordInfo,
            PATH(Int32, keywordId),
            BODY_DTO(Object<KeywordInfoBody>, info))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getAllKeywordData)
   {
      info->addTag("Acquisition");
      info->summary = "All keyword Data";
      info->description = "Get all keyword data";

      info->addResponse<Object<AllKeywordDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}", getAllKeywordData,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};

#include OATPP_CODEGEN_END(ApiController)

#endif /* CAcquisitionController_hpp */
