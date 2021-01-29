#ifndef LocationDTO_hpp
#define LocationDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Location : public oatpp::DTO
{
   DTO_INIT(Location, DTO);
   DTO_FIELD(String, status);
   DTO_FIELD(Float32, latitude);
   DTO_FIELD(Float32, longitude);
   DTO_FIELD(Float32, altitude);
   DTO_FIELD(String, timezone);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* LocationDTO_hpp */




