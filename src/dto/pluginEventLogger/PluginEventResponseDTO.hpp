#ifndef PLUGINEVENTLOGGERRESPONSEDTO_hpp
#define PLUGINEVENTLOGGERRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/pluginEventLogger/PluginEventLoggerDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PluginEventLoggerResponse : public CommonsData
{
   DTO_INIT(PluginEventLoggerResponse, CommonsData);
   DTO_FIELD(Fields<Vector<Object<PluginEventLogger>>>, data) = { {"pluginEventLogger", Vector<Object<PluginEventLogger>>({PluginEventLogger::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PLUGINEVENTLOGGEREmptyRESPONSEDTO_hpp */

