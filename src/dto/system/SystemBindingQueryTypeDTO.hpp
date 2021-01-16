#ifndef SystemBindingQueryTypeDTO_hpp
#define SystemBindingQueryTypeDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(SystemBindingQueryType, v_int32,
   VALUE(SERIAL_PORTS, 1, "SerialPorts"),
   VALUE(NETWORK_INTERFACES, 2, "NetworkInterfaces"),
   VALUE(NETWORK_INTERFACES_WITHOUT_LOOPBACK, 3, "NetworkInterfacesWithoutLoopback"),
   VALUE(PLATFORM_IS_WINDOWS, 4, "platformIsWindows"),
   VALUE(PLATFORM_IS_LINUX, 5, "platformIsLinux"),
   VALUE(PLATFORM_IS_MAC, 6, "platformIsMac"),
   VALUE(SUPPORTED_TIMEZONES, 7, "supportedTimezones")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* SystemBindingQueryTypeDTO_hpp */
