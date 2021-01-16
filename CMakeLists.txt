cmake_minimum_required(VERSION 3.1)

set(project_name yadoms-swagger)

project(${project_name})

set(CMAKE_CXX_STANDARD 11)

set(YADOMS_SWAGGER_CONTROLLER_SOURCES
        src/controller/EmptyController.hpp
        src/controller/EmptyController.cpp
        src/controller/AcquisitionController.hpp
        src/controller/AcquisitionController.cpp
        src/controller/AutomationController.hpp
        src/controller/AutomationController.cpp
        src/controller/ConfigurationController.hpp
        src/controller/ConfigurationController.cpp
        src/controller/DeviceController.hpp
        src/controller/DeviceController.cpp
        src/controller/EventLoggerController.hpp
        src/controller/EventLoggerController.cpp
        src/controller/MaintenanceController.cpp
        src/controller/MaintenanceController.hpp
        src/controller/PageController.cpp
        src/controller/PageController.hpp
        src/controller/WidgetController.cpp
        src/controller/WidgetController.hpp
        src/controller/PluginController.cpp
        src/controller/PluginController.hpp
        src/controller/PluginEventLoggerController.cpp
        src/controller/PluginEventLoggerController.hpp
        src/controller/RecipientController.cpp
        src/controller/RecipientController.hpp
        src/controller/SystemController.cpp
        src/controller/SystemController.hpp
)
set(YADOMS_SWAGGER_EMPTY_DTO_SOURCES
        src/dto/empty/EmptyResponseDTO.hpp
)

set(YADOMS_SWAGGER_SHARED_DTO_SOURCES 
        src/dto/shared/CommonsDataDTO.hpp
        src/dto/shared/EmptyResponseDTO.hpp
        src/dto/shared/SimpleResponseDTO.hpp
        src/dto/shared/KeywordAccessModeDTO.hpp
        src/dto/shared/KeywordDataTypeDTO.hpp
        src/dto/shared/MeasureTypeDTO.hpp
        src/dto/shared/HistoryDepthDTO.hpp
        src/dto/shared/RemoveDeviceDTO.hpp
        src/dto/shared/SystemEventCodeDTO.hpp
        src/dto/shared/DatabaseTypeDTO.hpp
        src/dto/shared/WidgetDataDTO.hpp
        src/dto/shared/WidgetsDTO.hpp
        src/dto/shared/WidgetConfigurationDTO.hpp
        src/dto/shared/DeviceConfigurationDTO.hpp
        src/dto/shared/WidgetsResponseDTO.hpp
        src/dto/shared/WidgetResponseDTO.hpp
        src/dto/shared/DependenciesDTO.hpp
        src/dto/shared/MinimumVersionDTO.hpp
        src/dto/shared/CoordinatesDTO.hpp
        src/dto/shared/DimensionsDTO.hpp
        src/dto/shared/PluginCategoryDTO.hpp
        src/dto/shared/PluginStateDTO.hpp
        src/dto/shared/EmptyObjectDTO.hpp
        src/dto/shared/TaskIdResponseDTO.hpp
        src/dto/shared/EventTypeDTO.hpp
        src/dto/shared/YadomsVersionDTO.hpp

)
set(YADOMS_SWAGGER_ACQUISITION_DTO_SOURCES 
        src/dto/acquisition/KeywordsLastDataResponseDTO.hpp
        src/dto/acquisition/KeywordsLastDataBodyDTO.hpp
        src/dto/acquisition/LastValueDTO.hpp
        src/dto/acquisition/InfoDTO.hpp
        src/dto/acquisition/KeywordsListInfoBodyDTO.hpp
        src/dto/acquisition/KeywordsListInfoResponseDTO.hpp
        src/dto/acquisition/KeywordInfoBodyDTO.hpp
        src/dto/acquisition/KeywordInfoResponseDTO.hpp
        src/dto/acquisition/KeywordLastDataResponseDTO.hpp
        src/dto/acquisition/AllKeywordDataResponseDTO.hpp
        src/dto/acquisition/AllKeywordDataDTO.hpp
        src/dto/acquisition/DateKeyDTO.hpp
        src/dto/acquisition/KeywordDataByDateResponseDTO.hpp
        src/dto/acquisition/KeywordDataByDateDTO.hpp
        src/dto/acquisition/HourDataKeyDTO.hpp
)
set(YADOMS_SWAGGER_AUTOMATION_DTO_SOURCES
        src/dto/automation/AllInterpretersResponseDTO.hpp
        src/dto/automation/InterpretersDTO.hpp
        src/dto/automation/AllRulesResponseDTO.hpp
        src/dto/automation/RuleDataDTO.hpp
        src/dto/automation/RulesDTO.hpp
        src/dto/automation/RuleCodeResponseDTO.hpp
        src/dto/automation/CreateRuleBodyDTO.hpp
        src/dto/automation/CodeDTO.hpp
        src/dto/automation/CreateRuleResponseDTO.hpp
        src/dto/automation/InterpreterTypeDTO.hpp
        src/dto/automation/EditorTypeDTO.hpp
        src/dto/automation/RuleResponseDTO.hpp
        src/dto/automation/RuleLogResponseDTO.hpp
        src/dto/automation/LogDTO.hpp
        src/dto/automation/NameDTO.hpp
)
set(YADOMS_SWAGGER_CONFIGURATION_DTO_SOURCES 
        src/dto/configuration/ServerConfigurationResponseDTO.hpp
        src/dto/configuration/ServerConfigurationDataDTO.hpp
        src/dto/configuration/LocationDTO.hpp
        src/dto/configuration/BasicAuthenticationDTO.hpp
        src/dto/configuration/SaveServerConfigurationBody.hpp
        src/dto/configuration/ExternalSectionTypeDTO.hpp
        src/dto/configuration/ExternalConfigurationBodyDTO.hpp
)
set(YADOMS_SWAGGER_DEVICE_DTO_SOURCES 
        src/dto/device/AllDevicesResponseDTO.hpp
        src/dto/device/AllDevicesDTO.hpp
        src/dto/device/DeviceDataDTO.hpp
        src/dto/device/OneDeviceResponseDTO.hpp
        src/dto/device/CompatibleForMergeDeviceDTO.hpp
        src/dto/device/CompatibleDevicesAndKeywordsByDeviceDTO.hpp
        src/dto/device/AllKeywordsResponseDTO.hpp
        src/dto/device/KeywordsDTO.hpp
        src/dto/device/KeywordDataDTO.hpp
        src/dto/device/TypeInfoDTO.hpp
        src/dto/device/KeywordsResponseDTO.hpp
        src/dto/device/DeviceMatchKeywordCriteriaBodyDTO.hpp
        src/dto/device/KeywordResponseDTO.hpp
        src/dto/device/KeywordDTO.hpp
        src/dto/device/KeywordsLastStateBodyDTO.hpp
        src/dto/device/KeywordsLastStateResponseDTO.hpp
        src/dto/device/DeviceDataToUpdateDTO.hpp
        src/dto/device/mergeDevicesBodyDTO.hpp
        src/dto/device/KeywordCorrespondenceDTO.hpp
        src/dto/device/FriendlyNameDTO.hpp
        src/dto/device/BlacklistDTO.hpp
)

set(YADOMS_SWAGGER_EVENTLOGGER_DTO_SOURCES
        src/dto/eventLogger/EventsResponseDTO.hpp
        src/dto/eventLogger/EventsDTO.hpp
        src/dto/eventLogger/EventDataDTO.hpp
        src/dto/eventLogger/LastEventReponseDTO.hpp
)

set(YADOMS_SWAGGER_MAINTENANCE_DTO_SOURCES
        src/dto/maintenance/DatabaseInformationResponseDTO.hpp
        src/dto/maintenance/DatabaseInformationDTO.hpp
        src/dto/maintenance/BackupsResponseDTO.hpp
        src/dto/maintenance/BackupsDTO.hpp
        src/dto/maintenance/FileDataDTO.hpp
        src/dto/maintenance/LogsResponseDTO.hpp
        src/dto/maintenance/LogsDTO.hpp
        src/dto/maintenance/ExportDataDTO.hpp
        src/dto/maintenance/ExportDataResponseDTO.hpp
)

set(YADOMS_SWAGGER_PAGE_DTO_SOURCES
        src/dto/page/PagesResponseDTO.hpp
        src/dto/page/PagesDTO.hpp
        src/dto/page/PageDataDTO.hpp
        src/dto/page/PageResponseDTO.hpp
)

set(YADOMS_SWAGGER_WIDGET_DTO_SOURCES
        src/dto/widget/PackageResponseDTO.hpp
        src/dto/widget/PackageDataDTO.hpp
        src/dto/widget/PackagesDTO.hpp

)

set(YADOMS_SWAGGER_PLUGIN_DTO_SOURCES
        src/dto/plugin/AvailablePluginsResponseDTO.hpp
        src/dto/plugin/PluginsDTO.hpp
        src/dto/plugin/PluginDataDTO.hpp
        src/dto/plugin/AvailablePluginsParameterizedResponseDTO.hpp
        src/dto/plugin/PluginsParameterizedDTO.hpp
        src/dto/plugin/FieldsBodyDTO.hpp
        src/dto/plugin/AvailablePluginsWithPackageResponseDTO.hpp
        src/dto/plugin/PluginsPackageDTO.hpp
        src/dto/plugin/PluginPackageDataDTO.hpp
        src/dto/plugin/PluginInstanceDTO.hpp
        src/dto/plugin/PluginsInstanceResponseDTO.hpp
        src/dto/plugin/PluginsInstanceDTO.hpp
        src/dto/plugin/PluginsInstanceWithStateResponseDTO.hpp
        src/dto/plugin/PluginsInstanceWithStateDTO.hpp
        src/dto/plugin/PluginInstanteWithStateDataDTO.hpp
        src/dto/plugin/StateDTO.hpp
        src/dto/plugin/OnePluginResponseDTO.hpp
        src/dto/plugin/PluginStateResponseDTO.hpp
        src/dto/plugin/PluginDevicesResponseDTO.hpp
        src/dto/plugin/InstanceLogResponseDTO.hpp
        src/dto/plugin/InstanceRunningResponseDTO.hpp
        src/dto/plugin/PluginDeviceBodyDTO.hpp
)

set(YADOMS_SWAGGER_PLUGIN_EVENT_LOGGER_DTO_SOURCES
        src/dto/pluginEventLogger/PluginEventResponseDTO.hpp
        src/dto/pluginEventLogger/PluginEventLoggerDTO.hpp
)

set(YADOMS_SWAGGER_RECIPIENT_DTO_SOURCES
        src/dto/recipient/RecipientsResponseDTO.hpp
        src/dto/recipient/RecipientDataDTO.hpp
        src/dto/recipient/RecipientFieldDataDTO.hpp
        src/dto/recipient/RecipientResponseDTO.hpp
        src/dto/recipient/RecipientFieldResponseDTO.hpp
)

set(YADOMS_SWAGGER_SYSTEM_DTO_SOURCES
        src/dto/system/SerialPortsResponseDTO.hpp
        src/dto/system/SystemBindingQueryTypeDTO.hpp
        src/dto/system/NetworkInterfacesResponseDTO.hpp
        src/dto/system/NetworkInterfacesDTO.hpp
        src/dto/system/NetworkInterfacesWithoutLoopbackResponseDTO.hpp
        src/dto/system/ResultResponseDTO.hpp
        src/dto/system/SystemInformationResponseDTO.hpp
        src/dto/system/SystemInformationDTO.hpp
        src/dto/system/CurrentTimeResponseDTO.hpp
        src/dto/system/CapacityDTO.hpp
        src/dto/system/CapacitiesResponseDTO.hpp
        src/dto/system/CapacitiesDTO.hpp
)

set(YADOMS_SWAGGER_DTO_SOURCES
        ${YADOMS_SWAGGER_EMPTY_DTO_SOURCES}
        ${YADOMS_SWAGGER_SHARED_DTO_SOURCES}
        ${YADOMS_SWAGGER_ACQUISITION_DTO_SOURCES}
        ${YADOMS_SWAGGER_AUTOMATION_DTO_SOURCES}
        ${YADOMS_SWAGGER_CONFIGURATION_DTO_SOURCES}
        ${YADOMS_SWAGGER_DEVICE_DTO_SOURCES}
        ${YADOMS_SWAGGER_EVENTLOGGER_DTO_SOURCES}
        ${YADOMS_SWAGGER_MAINTENANCE_DTO_SOURCES}
        ${YADOMS_SWAGGER_PAGE_DTO_SOURCES}
        ${YADOMS_SWAGGER_WIDGET_DTO_SOURCES}
        ${YADOMS_SWAGGER_PLUGIN_DTO_SOURCES}
        ${YADOMS_SWAGGER_PLUGIN_EVENT_LOGGER_DTO_SOURCES}
        ${YADOMS_SWAGGER_RECIPIENT_DTO_SOURCES}
        ${YADOMS_SWAGGER_SYSTEM_DTO_SOURCES}
)

set(YADOMS_SWAGGER_SOURCES
        src/AppComponent.hpp
        ${YADOMS_SWAGGER_CONTROLLER_SOURCES}
        ${YADOMS_SWAGGER_DTO_SOURCES}

)
source_group(sources\\controller\\ controller/*.*)
source_group(sources\\dto\\empty dto/empty/*.*)
source_group(sources\\dto\\shared dto/shared/*.*)
source_group(sources\\dto\\acquisition dto/acquisition/*.*)
source_group(sources\\dto\\automation dto/automation/*.*)
source_group(sources\\dto\\configuration dto/configuration/*.*)
source_group(sources\\dto\\device dto/device/*.*)
source_group(sources\\dto\\eventLogger dto/eventLogger/*.*)
source_group(sources\\dto\\maintenance dto/maintenance/*.*)
source_group(sources\\dto\\page dto/page/*.*)
source_group(sources\\dto\\widget dto/widget/*.*)
source_group(sources\\dto\\pluginEventLogger dto/pluginEventLogger/*.*)
source_group(sources\\dto\\plugin dto/plugin/*.*)
source_group(sources\\dto\\recipient dto/recipient/*.*)
source_group(sources\\dto\\system dto/system/*.*)

 # Allow big object
if (MSVC)
   add_definitions(/bigobj)
endif()

add_library(${project_name}-lib
        ${YADOMS_SWAGGER_SOURCES}
)

## link libs

find_package(oatpp 1.2.5 REQUIRED)
find_package(oatpp-swagger  1.2.5 REQUIRED)

target_link_libraries(${project_name}-lib
        PUBLIC oatpp::oatpp
		  PUBLIC oatpp::oatpp-swagger
)

## define path to swagger-ui res folder

add_definitions( 
-DOATPP_SWAGGER_RES_PATH="${OATPP_BASE_DIR}/bin/oatpp-swagger/res"
)

target_include_directories(${project_name}-lib PUBLIC src)

## add executables

add_executable(${project_name}-exe
        src/App.cpp)
target_link_libraries(${project_name}-exe ${project_name}-lib)
add_dependencies(${project_name}-exe ${project_name}-lib)

set_target_properties(${project_name}-lib ${project_name}-exe PROPERTIES
        CXX_STANDARD 11
        CXX_EXTENSIONS OFF
        CXX_STANDARD_REQUIRED ON
)

