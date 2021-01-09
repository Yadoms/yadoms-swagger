cmake_minimum_required(VERSION 3.1)

set(project_name yadoms-swagger)

project(${project_name})

set(CMAKE_CXX_STANDARD 11)

set(YADOMS_SWAGGER_CONTROLLER_SOURCES
        src/controller/AcquisitionController.hpp
        src/controller/AcquisitionController.cpp
        src/controller/AutomationController.hpp
        src/controller/AutomationController.cpp
        src/controller/ConfigurationController.hpp
        src/controller/ConfigurationController.cpp
        src/controller/DeviceController.hpp
        src/controller/DeviceController.cpp
)
set(YADOMS_SWAGGER_SHARED_DTO_SOURCES 
        src/dto/shared/CommonsDataDTO.hpp
        src/dto/shared/EmptyResponseDTO.hpp
        src/dto/shared/SimpleResponseDTO.hpp
        src/dto/shared/KeywordAccessModeDTO.hpp
        src/dto/shared/KeywordDataTypeDTO.hpp
        src/dto/shared/MeasureTypeDTO.hpp
        src/dto/shared/HistoryDepthDTO.hpp
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
        src/dto/device/KeywordResponseDTO.hpp
)

set(YADOMS_SWAGGER_DTO_SOURCES
        ${YADOMS_SWAGGER_SHARED_DTO_SOURCES}
        ${YADOMS_SWAGGER_ACQUISITION_DTO_SOURCES}
        ${YADOMS_SWAGGER_AUTOMATION_DTO_SOURCES}
        ${YADOMS_SWAGGER_CONFIGURATION_DTO_SOURCES}
        ${YADOMS_SWAGGER_DEVICE_DTO_SOURCES}
)

set(YADOMS_SWAGGER_SOURCES
        src/AppComponent.hpp
        ${YADOMS_SWAGGER_CONTROLLER_SOURCES}
        ${YADOMS_SWAGGER_DTO_SOURCES}

)
source_group(sources\\controller\\ controller/*.*)
source_group(sources\\dto\\shared dto/shared/*.*)
source_group(sources\\dto\\acquisition dto/acquisition/*.*)
source_group(sources\\dto\\automation dto/automation/*.*)
source_group(sources\\dto\\configuration dto/configuration/*.*)
source_group(sources\\dto\\device dto/device/*.*)
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

