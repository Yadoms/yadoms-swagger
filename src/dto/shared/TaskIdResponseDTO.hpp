#ifndef TaskIdRESPONSEDTO_hpp
#define TaskIdRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class TaskIdResponse : public CommonsData
{
   DTO_INIT(TaskIdResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = Fields<String>({ std::make_pair("taskId", "") });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* TaskIdRESPONSEDTO_hpp */



