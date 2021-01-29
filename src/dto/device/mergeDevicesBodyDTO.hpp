#ifndef MergeDevicesBodyDTO_hpp
#define MergeDevicesBodyDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/device/KeywordCorrespondenceDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class MergeDevicesBody : public oatpp::DTO
{
   DTO_INIT(MergeDevicesBody, DTO);
   DTO_FIELD(Int32, sourceDeviceId);
   DTO_FIELD(Int32, targetDeviceId);
   DTO_FIELD(Vector<Object<KeywordCorrespondence>>, keywordCorrespondences);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* MergeDevicesBodyDTO_hpp */







