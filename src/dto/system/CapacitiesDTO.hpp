#ifndef CapacitiesDTO_hpp
#define CapacitiesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/system/CapacityDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Capacities : public oatpp::DTO
{
   DTO_INIT(Capacities, DTO);
   DTO_FIELD(Fields<Object<Capacity>>, capacities) = { {"apparentpower", Object<Capacity>({Capacity::createShared()})}, {"armingAlarm", Object<Capacity>({Capacity::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CapacitiesRESPONSEDTO_hpp */




