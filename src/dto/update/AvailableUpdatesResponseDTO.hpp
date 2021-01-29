#ifndef AvailableUpdatesRESPONSEDTO_hpp
#define AvailableUpdatesRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/update/AivailableUpdatesContainerDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class AvailableUpdatesResponse : public CommonsData
{
   DTO_INIT(AvailableUpdatesResponse, CommonsData);
   DTO_FIELD(Object<AvailableUpdatesContainer>, data) = {{Object<AvailableUpdatesContainer>({AvailableUpdatesContainer::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* AvailableUpdatesRESPONSEDTO_hpp */


