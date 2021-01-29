#ifndef TaskIdDTO_hpp
#define TaskIdDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class TaskId : public oatpp::DTO
{
   DTO_INIT(TaskId, DTO);
   DTO_FIELD(String, taskId);
};

#include OATPP_CODEGEN_END(DTO)

#endif /* TaskIdDTO_hpp */



