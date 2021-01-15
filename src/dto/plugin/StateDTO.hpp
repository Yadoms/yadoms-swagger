#ifndef StateDTO_hpp
#define StateDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/PluginStateDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class State : public oatpp::DTO
{
   DTO_INIT(State, DTO);
   DTO_FIELD(Enum<PluginState>, state);
   DTO_FIELD(String, messageId);
   DTO_FIELD(String, messageData);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* StateDTO_hpp */





