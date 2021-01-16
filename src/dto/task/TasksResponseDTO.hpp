#ifndef TaskRESPONSEDTO_hpp
#define TaskRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include "dto/task/TaskDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class TaskResponse : public CommonsData
{
   DTO_INIT(TaskResponse, CommonsData);
   DTO_FIELD(Fields<Vector<Object<Task>>>, data) = { {"task", Vector<Object<Task>>({Task::createShared()})} };
};

#include OATPP_CODEGEN_END(DTO)

#endif /* TaskResponseEmptyRESPONSEDTO_hpp */


