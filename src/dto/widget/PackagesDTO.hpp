#ifndef PackagesDTO_hpp
#define PackagesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/widget/PackageDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Packages : public oatpp::DTO
{
   DTO_INIT(Packages, DTO);
   DTO_FIELD(Vector<Object<PackageData>>, package);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PackagesDTO_hpp */


