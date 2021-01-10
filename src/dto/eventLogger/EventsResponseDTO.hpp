#ifndef EventsRESPONSEDTO_hpp
#define EventsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/eventLogger/EventsDTO.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class EventsResponse : public CommonsData
{
   DTO_INIT(EventsResponse, CommonsData);
   DTO_FIELD(Object<Events>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* EventsRESPONSEDTO_hpp */

