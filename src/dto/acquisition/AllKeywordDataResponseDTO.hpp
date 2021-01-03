#ifndef ALLKEYWORDDATARESPONSEDTO_hpp
#define ALLKEYWORDDATARESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/acquisition/AllKeywordDataDTO.hpp"
#include "CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)


class AllKeywordDataResponse : public CommonsData
{
   DTO_INIT(AllKeywordDataResponse, CommonsData);
   DTO_FIELD(Object<AllKeywordData>, data);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ALLKEYWORDDATARESPONSEDTO_hpp */
