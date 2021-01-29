#ifndef PreReleasesDTO_hpp
#define PreReleasesDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

ENUM(PreReleases, v_int32,
   VALUE(INCLUDE_PRERELEASES, 1, "includePreReleases"),
   VALUE(NOT_INCLUDE_PRERELEASES, 2, "NotIncludePreReleases")
);

#include OATPP_CODEGEN_END(DTO)

#endif /* PreReleasesDTO_hpp */




