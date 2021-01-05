cmake_minimum_required(VERSION 3.1)

set(project_name yadoms-swagger)

project(${project_name})

set(CMAKE_CXX_STANDARD 11)

add_library(${project_name}-lib
        src/AppComponent.hpp
        src/controller/MyController.cpp
        src/controller/MyController.hpp
        src/controller/AcquisitionController.hpp
        src/controller/AutomationController.hpp
        src/controller/ConfigurationController.hpp

        src/dto/CommonsDataDTO.hpp
        src/dto/EmptyResponseDTO.hpp
        src/dto/SimpleResponseDTO.hpp
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

        src/dto/configuration/ServerConfigurationResponseDTO.hpp
        src/dto/configuration/ServerConfigurationDataDTO.hpp
        src/dto/configuration/LocationDTO.hpp
        src/dto/configuration/BasicAuthenticationDTO.hpp
        src/dto/configuration/SaveServerConfigurationBody.hpp
        src/dto/configuration/ExternalSectionTypeDTO.hpp
        src/dto/configuration/ExternalConfigurationBodyDTO.hpp
        src/dto/DTOs.hpp

)

## link libs

find_package(oatpp 1.2.5 REQUIRED)
find_package(oatpp-swagger  1.2.5 REQUIRED)

target_link_libraries(${project_name}-lib
        PUBLIC oatpp::oatpp
        PUBLIC oatpp::oatpp-test
		  PUBLIC oatpp::oatpp-swagger
)

## define path to swagger-ui res folder

add_definitions( 
-DOATPP_SWAGGER_RES_PATH="${OATPP_BASE_DIR}/bin/oatpp-swagger/res"
)

target_include_directories(${project_name}-lib PUBLIC src)

## add executables

add_executable(${project_name}-exe
        src/App.cpp
        test/app/MyApiTestClient.hpp)
target_link_libraries(${project_name}-exe ${project_name}-lib)
add_dependencies(${project_name}-exe ${project_name}-lib)

add_executable(${project_name}-test
        test/tests.cpp
        test/app/TestComponent.hpp
        test/app/MyApiTestClient.hpp
        test/MyControllerTest.cpp
        test/MyControllerTest.hpp
)

target_link_libraries(${project_name}-test ${project_name}-lib)
add_dependencies(${project_name}-test ${project_name}-lib)

set_target_properties(${project_name}-lib ${project_name}-exe ${project_name}-test PROPERTIES
        CXX_STANDARD 11
        CXX_EXTENSIONS OFF
        CXX_STANDARD_REQUIRED ON
)

enable_testing()
add_test(project-tests ${project_name}-test)
