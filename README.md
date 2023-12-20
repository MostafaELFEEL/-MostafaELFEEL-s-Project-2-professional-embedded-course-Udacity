# MostafaELFEEL's Project 2: Professional Embedded Course on Udacity

## Project Overview
This project showcases an on-demand traffic light control system built using AVR ATMEGA32. The system integrates a pedestrian crosswalk button to ensure safe pedestrian crossings.

---

## System Components

### Hardware:
- **Core Component:** ATmega32 microcontroller
- **Pedestrian Button:** Connected to INT0, INT1, or INT2 pin
- **Traffic Signal LEDs:**
  - Cars: Green, Yellow, Red
  - Pedestrians: Green, Yellow, Red

![Hardware Setup](https://github.com/MostafaELFEEL/-MostafaELFEEL-s-Project-2-professional-embedded-course-Udacity/assets/106331831/909cda95-418d-46e8-8d7f-9d2f31df9d95)

---

## System Operation Modes

### Normal Mode:
- Sequential transition of car LEDs: Green → Yellow → Red → Yellow → Green
- Yellow LED blinks for 5 seconds before transitioning

### Pedestrian Mode:
- Activated by pressing the pedestrian button
- Two scenarios based on the state of car LEDs

![Mode Transition](https://github.com/MostafaELFEEL/-MostafaELFEEL-s-Project-2-professional-embedded-course-Udacity/assets/106331831/29f18b4c-5527-42bc-9d71-9eeecbc3e794)

---

## User Stories & Test Cases

### User Story 1:
- Pedestrian presses during car green light: Wait for yellow lights → Safe to cross

### User Story 2:
- Pedestrian presses during blinking yellow: Wait for all yellow lights → Safe to cross

### User Story 3:
- Pedestrian presses during car and pedestrian green: No changes

### User Story 4:
- Long press on pedestrian button: No action, ignored

### User Story 5:
- Double press on pedestrian button: First press triggers action, second press ignored

---

## Implementation Details

### 1. System Design:
- Static architecture creation
- Initial groundwork setup

### 2. Development Environment:
- Layered architecture for project organization
- Environment setup for smooth execution

### 3. Application:
- Driver implementation and testing
- System flow integration

### 4. Testing:
- Verification of system behavior through user stories

![System Flow](https://github.com/MostafaELFEEL/-MostafaELFEEL-s-Project-2-professional-embedded-course-Udacity/assets/106331831/6dbc5f9f-a9a8-4364-8687-4282da941118)

---

## Additional Resources
- [Test Videos](https://www.youtube.com/watch?v=6xJXrGYFchE)
- [Explanation Video](https://youtu.be/iUl60bDeCck)
