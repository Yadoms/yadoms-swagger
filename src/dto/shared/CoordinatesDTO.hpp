#ifndef CoordinatesDTO_hpp
#define CoordinatesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CoordinatesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Coordinates : public oatpp::DTO
{
   DTO_INIT(Coordinates, DTO);
   DTO_FIELD(Int32, x);
   DTO_FIELD(Int32, y);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* CoordinatesDTO_hpp */
