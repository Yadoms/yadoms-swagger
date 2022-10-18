#include "./AppComponent.hpp"
#include "oatpp/network/Server.hpp"
#include <iostream>
#include "oatpp-swagger/Controller.hpp"
#include "controller/AcquisitionController.hpp"
#include "controller/AutomationController.hpp"
#include "controller/ConfigurationController.hpp"
#include "controller/DeviceController.hpp"
#include "controller/EventLoggerController.hpp"
#include "controller/MaintenanceController.hpp"
#include "controller/PageController.hpp"
#include "controller/WidgetController.hpp"
#include "controller/PluginController.hpp"
#include "controller/PluginEventLoggerController.hpp"
#include "controller/RecipientController.hpp"
#include "controller/SystemController.hpp"
#include "controller/TaskController.hpp"
#include "controller/UpdateController.hpp"

void run()
{
	/* Register Components in scope of run() method */
	AppComponent components;

	/* Get router component */
	OATPP_COMPONENT(std::shared_ptr<oatpp::web::server::HttpRouter>, router);


	oatpp::web::server::api::Endpoints docEndpoints;
	/* Create Controllers and add all of its endpoints to router */
	// You can copy emptyController
	//auto emptyController = std::make_shared<CEmptyController>();
	//emptyController->addEndpointsToRouter(router);
	docEndpoints.append(router->addController(std::make_shared<CAcquisitionController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CConfigurationController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CDeviceController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CEventLoggerController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CPageController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CWidgetController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CPluginController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CPluginEventLoggerController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CRecipientController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CSystemController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CTaskController>())->getEndpoints());
	docEndpoints.append(router->addController(std::make_shared<CUpdateController>())->getEndpoints());


	/* Get connection handler component */
	OATPP_COMPONENT(std::shared_ptr<oatpp::network::ConnectionHandler>, connectionHandler);

	/* Get connection provider component */
	OATPP_COMPONENT(std::shared_ptr<oatpp::network::ServerConnectionProvider>, connectionProvider);

	router->addController(oatpp::swagger::Controller::createShared(docEndpoints));

	/* Create server which takes provided TCP connections and passes them to HTTP connection handler */
	oatpp::network::Server server(connectionProvider, connectionHandler);

	/* Priny info about server port */
	OATPP_LOGI("Yadoms ", "Server running on port %s", connectionProvider->getProperty("port").getData());

	/* Run server */
	server.run();
}

/**
 *  main
 */
int main(int argc, const char* argv[])
{
	oatpp::base::Environment::init();

	run();

	/* Print how much objects were created during app running, and what have left-probably leaked */
	/* Disable object counting for release builds using '-D OATPP_DISABLE_ENV_OBJECT_COUNTERS' flag for better performance */
	std::cout << "\nEnvironment:\n";
	std::cout << "objectsCount = " << oatpp::base::Environment::getObjectsCount() << "\n";
	std::cout << "objectsCreated = " << oatpp::base::Environment::getObjectsCreated() << "\n\n";

	oatpp::base::Environment::destroy();

	return 0;
}
