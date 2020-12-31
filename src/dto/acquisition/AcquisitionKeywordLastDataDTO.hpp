#ifndef AQUISITIONDTO_hpp
#define AQUISITIONDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/AcquisitionLastValueDTO.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class AcquisitionKeywordLastData : public oatpp::DTO
{
   DTO_INIT(AcquisitionKeywordLastData, DTO);
   DTO_FIELD(Boolean, result);
   DTO_FIELD(String, message);
   DTO_FIELD(Fields<Object<LastValue>>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AQUISITIONDTO_hpp */