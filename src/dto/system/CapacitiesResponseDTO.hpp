#ifndef CapacitiesRESPONSEDTO_hpp
#define CapacitiesRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/system/CapacitiesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class CapacitiesResponse : public CommonsData
{
   DTO_INIT(CapacitiesResponse, CommonsData);
   DTO_FIELD(Object<Capacities>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CapacitiesRESPONSEDTO_hpp */



