#ifndef EventsDTO_hpp
#define EventsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/eventLogger/EventDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Events : public oatpp::DTO
{
   DTO_INIT(Events, DTO);
   DTO_FIELD(Vector<Object<EventData>>, EventLogger);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* EventsDTO_hpp */



