#ifndef CAcquisitionController_hpp
#define CAcquisitionController_hpp

#include <oatpp/web/server/api/ApiController.hpp>
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
#include "dto/acquisition/KeywordDataByDateResponseDTO.hpp"
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
      info->body.addExample("keywords", keywords);

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
      info->body.addExample("keywords", keywords);

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

   ENDPOINT_INFO(getKeywordDataFromDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data from date";
      info->description = "Get keyword data from date";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201230T102659)";
      info->addResponse<Object<AllKeywordDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/{keywordDateFrom}", getKeywordDataFromDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataFromToDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data between two dates";
      info->description = "Get keyword data between two dates";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201230T102659)";
      info->pathParams["keywordDateTo"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201230T102618)";
      info->addResponse<Object<AllKeywordDataResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/{keywordDateFrom}/{keywordDateTo}", getKeywordDataFromToDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom),
            PATH(String, keywordDateTo))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByHour)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by hour";
      info->description = "Get all acquisitions (avg, min, max per day) for the given keywordId";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/hour", getKeywordDataByHour,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByHourFromDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by hour from date";
      info->description = "Get all acquisitions (avg, min, max per day) since keywordDateFrom";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201023T190000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/hour/{keywordDateFrom}", getKeywordDataByHourFromDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByHourFromToDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by hour between two dates";
      info->description = "Get all acquisitions (avg, min, max per day) from keywordDateFrom to keywordDateTo";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201023T190000)";
      info->pathParams["keywordDateTo"].description =
         "Date format : keywordDateTo where T is delimeter between date and time (Example : 20210102T170000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/hour/{keywordDateFrom}/{keywordDateTo}",
            getKeywordDataByHourFromToDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom),
            PATH(String, keywordDateTo))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByDay)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by day";
      info->description = "Get all acquisitions (avg, min, max per day) for the given keywordId";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/day", getKeywordDataByDay,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByDayFromDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by day from date";
      info->description = "Get all acquisitions (avg, min, max per day) since keywordDateFrom";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201010T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/day/{keywordDateFrom}", getKeywordDataByDayFromDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByDayFromToDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by day between two dates";
      info->description = "Get all acquisitions (avg, min, max per day) from keywordDateFrom to keywordDateTo";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201010T000000)";
      info->pathParams["keywordDateTo"].description =
         "Date format : keywordDateTo where T is delimeter between date and time (Example : 20201023T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/day/{keywordDateFrom}/{keywordDateTo}",
            getKeywordDataByDayFromToDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom),
            PATH(String, keywordDateTo))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByMonth)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by Month";
      info->description = "Get all acquisitions (avg, min, max per day) for the given keywordId";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/month", getKeywordDataByMonth,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByMonthFromDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by month from date";
      info->description = "Get all acquisitions (avg, min, max per day) since keywordDateFrom";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201001T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/month/{keywordDateFrom}", getKeywordDataByMonthFromDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByMonthFromToDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by month between two dates";
      info->description = "Get all acquisitions (avg, min, max per day) from keywordDateFrom to keywordDateTo";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20201001T000000)";
      info->pathParams["keywordDateTo"].description =
         "Date format : keywordDateTo where T is delimeter between date and time (Example : 20201101T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/month/{keywordDateFrom}/{keywordDateTo}",
            getKeywordDataByMonthFromToDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom),
            PATH(String, keywordDateTo))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByYear)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by year";
      info->description = "Get all acquisitions (avg, min, max per day) for the given keywordId";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/year", getKeywordDataByYear,
            PATH(Int32, keywordId))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByYearFromDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by year from date";
      info->description = "Get all acquisitions (avg, min, max per day) since keywordDateFrom";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20200101T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/year/{keywordDateFrom}", getKeywordDataByYearFromDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom))
   {
      return createResponse(Status::CODE_200, "OK");
   }

   ENDPOINT_INFO(getKeywordDataByYearFromToDate)
   {
      info->addTag("Acquisition");
      info->summary = "keyword data by year between two dates";
      info->description = "Get all acquisitions (avg, min, max per day) from keywordDateFrom to keywordDateTo";
      info->pathParams["keywordDateFrom"].description =
         "Date format : YYYYMMDDThhmmss where T is delimeter between date and time (Example : 20200101T000000)";
      info->pathParams["keywordDateTo"].description =
         "Date format : keywordDateTo where T is delimeter between date and time (Example : 20210101T000000)";
      info->addResponse<Object<KeywordDataByDateResponse>>(
         Status::CODE_200,
         "application/json"
      );
   }

   ENDPOINT("Get", "/acquisition/keyword/{keywordId}/year/{keywordDateFrom}/{keywordDateTo}",
            getKeywordDataByYearFromToDate,
            PATH(Int32, keywordId),
            PATH(String, keywordDateFrom),
            PATH(String, keywordDateTo))
   {
      return createResponse(Status::CODE_200, "OK");
   }
};

#include OATPP_CODEGEN_END(ApiController)

#endif /* CAcquisitionController_hpp */
