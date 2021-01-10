#ifndef EmptyController_hpp
#define EmptyController_hpp
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"
#include "dto/empty/EmptyResponseDTO.hpp"
#include OATPP_CODEGEN_BEGIN(ApiController)

class CEmptyController : public oatpp::web::server::api::ApiController
{
public:
   CEmptyController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper))
      : ApiController(objectMapper)
   {
   }
   ENDPOINT_INFO(root)
   {
      info->addTag("Root tag");
      info->summary = "Get Hello word response";
      info->description = "Get Hello word response";
      info->addResponse<Object<EmptyResponse>>(
         Status::CODE_200,
         "application/json"
         );
   }
   ENDPOINT("GET", "/", root) {
      return createResponse(Status::CODE_200, "OK");
   }
};
#include OATPP_CODEGEN_END(ApiController)
#endif /* EmptyController_hpp */