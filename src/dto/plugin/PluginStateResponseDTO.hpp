#ifndef PluginStateResponseDTO_hpp
#define PluginStateResponseDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/shared/PluginStateDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginStateResponse : public CommonsData
{
   DTO_INIT(PluginStateResponse, CommonsData);
   DTO_FIELD(Fields<Enum<PluginState>>, data) = { {"state", PluginState::RUNNING} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginStateResponseDTO_hpp */




