#ifndef AppComponent_hpp
#define AppComponent_hpp

#include "oatpp/web/server/HttpConnectionHandler.hpp"
#include "oatpp/network/tcp/server/ConnectionProvider.hpp"
#include "oatpp/parser/json/mapping/ObjectMapper.hpp"
#include "oatpp/core/macro/component.hpp"
#include "oatpp-swagger/Model.hpp"
#include "oatpp-swagger/Resources.hpp"

/**
 *  Class which creates and holds Application components and registers components in oatpp::base::Environment
 *  Order of components initialization is from top to bottom
 */
class AppComponent
{
public:

   /**
    *  Create ConnectionProvider component which listens on the port
    */
   OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::network::ServerConnectionProvider>, serverConnectionProvider)([]
      {
         return oatpp::network::tcp::server::ConnectionProvider::createShared({
            "0.0.0.0", 8000, oatpp::network::Address::IP_4
         });
      }());

   /**
    *  Create Router component
    */
   OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::web::server::HttpRouter>, httpRouter)([]
      {
         return oatpp::web::server::HttpRouter::createShared();
      }());

   /**
    *  Create ConnectionHandler component which uses Router component to route requests
    */
   OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::network::ConnectionHandler>, serverConnectionHandler)([]
      {
         OATPP_COMPONENT(std::shared_ptr<oatpp::web::server::HttpRouter>, router); // get Router component
         return oatpp::web::server::HttpConnectionHandler::createShared(router);
      }());

   /**
    *  Create ObjectMapper component to serialize/deserialize DTOs in Contoller's API
    */
   OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::data::mapping::ObjectMapper>, apiObjectMapper)([]
      {
         return oatpp::parser::json::mapping::ObjectMapper::createShared();
      }());

   /**
 *  General API docs info
 */
   OATPP_CREATE_COMPONENT(
      std::shared_ptr<oatpp::swagger::DocumentInfo>,
      swaggerDocumentInfo
   )([]
      {
         oatpp::swagger::DocumentInfo::Builder builder;
         builder
            .setTitle("Yadoms server Swagger-UI")
            .setDescription("Yadoms is open source, simple, powerfull, flexible and multiplatforms domotic solution.")
            .setVersion("1.0")
            .setContactName("Oussama DAHMAZ")
            .setContactUrl("http://yadoms.com/forum/")
            .setLicenseName("GNU General Public License v3.0")
            .setLicenseUrl("https://github.com/Yadoms/yadoms-swagger-spot/blob/master/LICENSE")
            .addServer("http://localhost:8080/rest", "server on localhost");
         return builder.build();
      }());
   /**
    *  Swagger-Ui Resources
    */
   OATPP_CREATE_COMPONENT(
      std::shared_ptr<oatpp::swagger::Resources>,
      swaggerResources
   )([]
      {
         return oatpp::swagger::Resources::loadResources(
            OATPP_SWAGGER_RES_PATH
         );
      }());
};

#endif /* AppComponent_hpp */
