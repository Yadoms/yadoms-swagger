#ifndef DependenciesDTO_hpp
#define DependenciesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/widget/MinimumVersionDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Dependencies : public oatpp::DTO
{
   DTO_INIT(Dependencies, DTO);
   DTO_FIELD(Object<MinimumVersion>, yadoms);

};

#include OATPP_CODEGEN_END(DTO)

#endif /* DependenciesDTO_hpp */
