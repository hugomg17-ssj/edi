################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CuentaBancaria.cpp \
../src/EDI_PRACTICA_1.cpp \
../src/Estacion.cpp \
../src/GestorUsuarios.cpp \
../src/Patinete.cpp \
../src/PruebasCuentaBancaria.cpp \
../src/PruebasEstacion.cpp \
../src/PruebasGestorUsuarios.cpp \
../src/PruebasPatinete.cpp \
../src/PruebasUsuario.cpp \
../src/Usuario.cpp 

CPP_DEPS += \
./src/CuentaBancaria.d \
./src/EDI_PRACTICA_1.d \
./src/Estacion.d \
./src/GestorUsuarios.d \
./src/Patinete.d \
./src/PruebasCuentaBancaria.d \
./src/PruebasEstacion.d \
./src/PruebasGestorUsuarios.d \
./src/PruebasPatinete.d \
./src/PruebasUsuario.d \
./src/Usuario.d 

OBJS += \
./src/CuentaBancaria.o \
./src/EDI_PRACTICA_1.o \
./src/Estacion.o \
./src/GestorUsuarios.o \
./src/Patinete.o \
./src/PruebasCuentaBancaria.o \
./src/PruebasEstacion.o \
./src/PruebasGestorUsuarios.o \
./src/PruebasPatinete.o \
./src/PruebasUsuario.o \
./src/Usuario.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/CuentaBancaria.d ./src/CuentaBancaria.o ./src/EDI_PRACTICA_1.d ./src/EDI_PRACTICA_1.o ./src/Estacion.d ./src/Estacion.o ./src/GestorUsuarios.d ./src/GestorUsuarios.o ./src/Patinete.d ./src/Patinete.o ./src/PruebasCuentaBancaria.d ./src/PruebasCuentaBancaria.o ./src/PruebasEstacion.d ./src/PruebasEstacion.o ./src/PruebasGestorUsuarios.d ./src/PruebasGestorUsuarios.o ./src/PruebasPatinete.d ./src/PruebasPatinete.o ./src/PruebasUsuario.d ./src/PruebasUsuario.o ./src/Usuario.d ./src/Usuario.o

.PHONY: clean-src

