#ifndef EventDataDTO_hpp
#define EventDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/SystemEventCodeDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class EventData : public oatpp::DTO
{
   DTO_INIT(EventData, DTO);
   DTO_FIELD(Int32, id);
   DTO_FIELD(String, date);
   DTO_FIELD(Enum<SystemEventCode>, code);
   DTO_FIELD(String, who);
   DTO_FIELD(String, what);
   
};

#include OATPP_CODEGEN_END(DTO)

#endif /* EventDataDTO_hpp */




