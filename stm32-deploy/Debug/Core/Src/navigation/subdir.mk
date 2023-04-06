################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/navigation/dijkstra.c \
../Core/Src/navigation/k_d_tree.c \
../Core/Src/navigation/landmarks.c \
../Core/Src/navigation/lwgps.c \
../Core/Src/navigation/navigation.c \
../Core/Src/navigation/navigation_tests.c \
../Core/Src/navigation/proximity.c 

OBJS += \
./Core/Src/navigation/dijkstra.o \
./Core/Src/navigation/k_d_tree.o \
./Core/Src/navigation/landmarks.o \
./Core/Src/navigation/lwgps.o \
./Core/Src/navigation/navigation.o \
./Core/Src/navigation/navigation_tests.o \
./Core/Src/navigation/proximity.o 

C_DEPS += \
./Core/Src/navigation/dijkstra.d \
./Core/Src/navigation/k_d_tree.d \
./Core/Src/navigation/landmarks.d \
./Core/Src/navigation/lwgps.d \
./Core/Src/navigation/navigation.d \
./Core/Src/navigation/navigation_tests.d \
./Core/Src/navigation/proximity.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/navigation/%.o Core/Src/navigation/%.su Core/Src/navigation/%.cyclo: ../Core/Src/navigation/%.c Core/Src/navigation/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-navigation

clean-Core-2f-Src-2f-navigation:
	-$(RM) ./Core/Src/navigation/dijkstra.cyclo ./Core/Src/navigation/dijkstra.d ./Core/Src/navigation/dijkstra.o ./Core/Src/navigation/dijkstra.su ./Core/Src/navigation/k_d_tree.cyclo ./Core/Src/navigation/k_d_tree.d ./Core/Src/navigation/k_d_tree.o ./Core/Src/navigation/k_d_tree.su ./Core/Src/navigation/landmarks.cyclo ./Core/Src/navigation/landmarks.d ./Core/Src/navigation/landmarks.o ./Core/Src/navigation/landmarks.su ./Core/Src/navigation/lwgps.cyclo ./Core/Src/navigation/lwgps.d ./Core/Src/navigation/lwgps.o ./Core/Src/navigation/lwgps.su ./Core/Src/navigation/navigation.cyclo ./Core/Src/navigation/navigation.d ./Core/Src/navigation/navigation.o ./Core/Src/navigation/navigation.su ./Core/Src/navigation/navigation_tests.cyclo ./Core/Src/navigation/navigation_tests.d ./Core/Src/navigation/navigation_tests.o ./Core/Src/navigation/navigation_tests.su ./Core/Src/navigation/proximity.cyclo ./Core/Src/navigation/proximity.d ./Core/Src/navigation/proximity.o ./Core/Src/navigation/proximity.su

.PHONY: clean-Core-2f-Src-2f-navigation

