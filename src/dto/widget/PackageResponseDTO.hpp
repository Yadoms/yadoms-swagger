#ifndef PackageRESPONSEDTO_hpp
#define PackageRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/widget/PackagesDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PackageResponse : public CommonsData
{
   DTO_INIT(PackageResponse, CommonsData);
   DTO_FIELD(Object<Packages>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PackageRESPONSEDTO_hpp */

