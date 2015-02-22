# telemetry-proxy
Project idea: Telemetry proxy between flight controllers and radio systems (radio controlled applications). However...this is a startup project and long time left before usable to anyone... :)

Basic (wanted) functionality:
- Use one UART to read flight computers (radio controlled helicopters/quads etc) telemetry data (MutliWii Serial Protocol (MSP), MAVLINK, ...)
- Extract information for this
- Output the data as "radio telemetry" sensors on other uart port and send to telmetry TX (intial support for JR XBUS, others may come).
- Hence, it will convert telemetry data into "sensor data" that can be seen directly on a transmitter (like JR XG14).
However...nothing is yet working. This is a description of what I am working on. ETA...any year soon... :) Spare-time project, so bare with me!

Development environment
- Base development is done under Windows (yeah...will update with Eclipse ARM evenyually).
- Using Em::Blocks 2.20 (http://www.emblocks.org) (including the included ARM GCC tool chain).
- Using STM32CubeMX (www.st.com) for generation of HW setup such as GPIO's, USB, etc. Not supernice code generation, but decided that it is good enought for now.
- Debugging with J-Link (Em::Blocks does however support more JTAG/SWD debuggers like ST-LINK)

Hardware
- Based on cheap EBAY modules for STM32F103C8/CB MCU's. Use this in google will most likely get you to one: "ebay STM32 Minimum System Development Board Arduino"
- Has an STM32F103C8 processor...but I am using it as a STM32F103CB (more flash/ram). The chip is the same, but not tested by ST. Hence not a good idea for commercial projects...but OK for me.
- Currently the source code implements a CDC (Virtual COM port) on the USB interface. Idea is to use this for configuration later on.
- Will need some soldering of cables for: POWER, UART-TO-FlightCombuter, UART-TO-RADIO-TX (Description of this will come if the project ever reaches this phase...)


