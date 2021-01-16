#ifndef PluginEventLoggerDTO_hpp
#define PluginEventLoggerDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/EventTypeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginEventLogger : public oatpp::DTO
{
   DTO_INIT(PluginEventLogger, DTO);
   DTO_FIELD(Int32, id) = 0;
   DTO_FIELD(String, eventDate) = "";
   DTO_FIELD(String, pluginName) = "";
   DTO_FIELD(String, pluginVersion) = "";
   DTO_FIELD(Enum<EventType>, eventType) = EventType::INFO;
   DTO_FIELD(String, message) = "";
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginEventLoggerDTO_hpp */

