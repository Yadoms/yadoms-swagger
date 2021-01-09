#ifndef RemoveDeviceDTO_hpp
#define RemoveDeviceDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(RemoveDevice, v_int32,
   VALUE(REMOVE_DEVICE, 1, "removeDevice"),
   VALUE(BLACKLIST_DEVICE, 2, "blacklistDevice")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* RemoveDeviceDTO_hpp */



