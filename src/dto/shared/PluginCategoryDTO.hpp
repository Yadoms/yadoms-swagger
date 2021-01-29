#ifndef PluginCategoryDTO_hpp
#define PluginCategoryDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(PluginCategory, v_int32,
   VALUE(SYSTEM, 1, "System"),
   VALUE(USER, 2, "User")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginCategoryDTO_hpp */


