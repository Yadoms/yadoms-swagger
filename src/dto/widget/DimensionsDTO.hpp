#ifndef DimensionsDTO_hpp
#define DimensionsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/widget/CoordinatesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Dimensions : public oatpp::DTO
{
   DTO_INIT(Dimensions, DTO);
   DTO_FIELD(Object<Coordinates>, min);
   DTO_FIELD(Object<Coordinates>, max);
   DTO_FIELD(Object<Coordinates>, default);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DimensionsDTO_hpp */