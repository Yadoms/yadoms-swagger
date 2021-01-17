# yadoms-swagger-spot
Yadoms server Swagger page
# Installation
## Windows
Run the script utilities/install-oatpp-modules.cmd as **administrator**

## Linux platforms
Run the script utilities/install-oatpp-modules.sh

## Build && Run on Linux
Under yadoms-swagger source code run : 
```
mkdir build && cd build/
cmake ..
make
./yadoms-swagger-exe
```

## Build && Run on Windows
Under yadoms-swagger source code run : 
```
MD build
cd build/
cmake ..
cmake --build .
.\src\Debug\yadoms-swagger-exe.exe
```

## Endpoints 

|URL|Description|
|---|---|
|http://localhost:8000/ | Root page |
|http://localhost:8000/swagger/ui | Swagger UI page |
|http://localhost:8000/api-docs/oas-3.0.0.json | Swagger json doc |

# Dependencies
- [Oatpp](https://github.com/oatpp/oatpp)
- [Oatpp-swagger](https://github.com/oatpp/oatpp-swagger)
