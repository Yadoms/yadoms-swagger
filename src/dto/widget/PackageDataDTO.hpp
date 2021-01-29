#ifndef PackageDataDTO_hpp
#define PackageDataDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/DependenciesDTO.hpp"
#include "dto/shared/DimensionsDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class PackageData : public oatpp::DTO
{
   DTO_INIT(PackageData, DTO);
   DTO_FIELD(String, type);
   DTO_FIELD(String, version);
   DTO_FIELD(String, author);
   DTO_FIELD(String, url);
   DTO_FIELD(String, credits);
   DTO_FIELD(Object<Dependencies>, dependencies);
   DTO_FIELD(Object<Dimensions>, dimensions);
   DTO_FIELD(Boolean, hasTitle);
   DTO_FIELD(Fields<String>, configurationSchema) = {};

};

#include OATPP_CODEGEN_END(DTO)

#endif /* PackageDataDTO_hpp */