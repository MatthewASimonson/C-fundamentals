################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Read\ and\ Write.cpp 

OBJS += \
./Read\ and\ Write.o 

CPP_DEPS += \
./Read\ and\ Write.d 


# Each subdirectory must supply rules for building sources it contributes
Read\ and\ Write.o: ../Read\ and\ Write.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Read and Write.d" -MT"Read\ and\ Write.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


