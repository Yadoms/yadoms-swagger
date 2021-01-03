#ifndef KEYWORDDATABYHOURRESPONSEDTO_hpp
#define KEYWORDDATABYHOURRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/KeywordDataByHourDTO.hpp"
#include "CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class KeywordDataByHourResponse : public CommonsData
{
   DTO_INIT(KeywordDataByHourResponse, CommonsData);
   DTO_FIELD(Object<KeywordDataByHour>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* KEYWORDDATABYHOURRESPONSEDTO_hpp */

