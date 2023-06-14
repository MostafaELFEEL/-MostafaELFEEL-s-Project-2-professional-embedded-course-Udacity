# -MostafaELFEEL-s-Project-2-professional-embedded-course-Udacity
## This project is about On-demand Traffic light control using AVR ATMEGA32.
### Description
A traffic light system with an on-demand crosswalk button has been implemented. The purpose of the crosswalk button is to inform the traffic signal operations that a pedestrian intends to cross the street. As a result, the traffic light adjusts its operations, allowing sufficient time for the pedestrian to safely cross.

Traffic lights are vital signaling devices installed at road intersections, pedestrian crossings, and various locations to regulate the flow of traffic. Typically, traffic lights consist of three signals arranged vertically or horizontally in the order of red, yellow, and green. These signals convey specific meanings to drivers and riders through colors and additional symbols such as arrows and bicycles.

While the international standardization of traffic light colors is widespread, variations may exist on national and local levels concerning traffic light sequences and associated laws.

## The project can be divided into four main tasks:

### System Design:
- Create a comprehensive static architecture for the system.
- Establish the necessary groundwork for system development.
- Development Environment Preparation:
- Apply a layered architecture to organize the project's folder structure.
- Set up the development environment for smooth execution.
### Application:
- Implement the required drivers for the system.
- Conduct thorough testing of the drivers to ensure proper functionality.
- Implement the overall system flow, incorporating the drivers.
### Testing:
- Test five user stories to verify the system's behavior and effectiveness.
### Hardware:
- Utilize the ATmega32 microcontroller as the core hardware component.
- Connect a push button to either the INT0, INT1, or INT2 pin to serve as the pedestrian button.
- Incorporate three LEDs for cars (Green, Yellow, and Red) to indicate traffic signals for vehicles.
- Utilize three LEDs for pedestrians (Green, Yellow, and Red) to indicate pedestrian crossing signals.
## Application Logic:

The system operates in two modes: Normal mode and Pedestrian mode.
### In Normal mode:
- The cars' LEDs transition sequentially every five seconds: Green, Yellow, Red, Yellow, Green.
- The Yellow LED blinks for five seconds before switching to Green or Red LEDs.
### In Pedestrian mode:
- Transition from Normal mode to Pedestrian mode upon pressing the pedestrian button.
- If the button is pressed while the cars' Red LED is on:
- The pedestrian's Green LED and the cars' Red LEDs remain on for five seconds, allowing pedestrians to cross.
- If the button is pressed while the cars' Green LED is on or the cars' Yellow LED is blinking:
- The pedestrian Red LED turns on, followed by both Yellow LEDs blinking for five seconds.
- Then, the cars' Red LED and pedestrian Green LEDs remain on for five seconds, indicating pedestrians should wait.
- After the two states mentioned above, the cars' Red LED turns off, and both Yellow LEDs begin blinking for five seconds.
- The pedestrian's Green LED remains on while the cars' Red LED turns off, and the cars' Green LED turns on.
- The traffic lights signals then return to the Normal mode, repeating the cycle.

