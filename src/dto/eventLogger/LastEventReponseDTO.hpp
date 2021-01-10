#ifndef LastEventRESPONSEDTO_hpp
#define LastEventRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/eventLogger/EventDataDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class LastEventResponse : public CommonsData
{
   DTO_INIT(LastEventResponse, CommonsData);
   DTO_FIELD(Object<EventData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* LastEventRESPONSEDTO_hpp */


