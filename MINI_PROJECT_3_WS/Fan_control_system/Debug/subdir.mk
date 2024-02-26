################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../adc.c \
../fan_control_system.c \
../gpio.c \
../lm35_sensor.c \
../motor.c \
../my_lcd.c \
../pwm.c 

OBJS += \
./adc.o \
./fan_control_system.o \
./gpio.o \
./lm35_sensor.o \
./motor.o \
./my_lcd.o \
./pwm.o 

C_DEPS += \
./adc.d \
./fan_control_system.d \
./gpio.d \
./lm35_sensor.d \
./motor.d \
./my_lcd.d \
./pwm.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


