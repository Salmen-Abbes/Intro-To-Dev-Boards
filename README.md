# Development Boards

This repository is designed to provide a structured and comprehensive guide for individuals of all skill levels, from beginners entering the exciting realm of electronics to seasoned developers seeking to broaden their expertise.

## What are the Development Boards?

Development boards (or called Dev Boards) are hardware platforms specifically designed to facilitate the development of electronic projects. They provide a convenient and accessible way for developers and hobbyists to prototype, test, and deploy their projects.

These boards typically come equipped with various components and features, such as microcontrollers or microprocessors, input/output pins, connectivity options (such as USB or Wi-Fi), and integrated development environments (IDEs) for programming and debugging.

## Examples of ‘Dev Boards’ (Test/Evaluation):

Dev boards come in various types, each offering unique features and capabilities. Here are a few examples of popular development boards:

- **Arduino**: Arduino boards are widely used for their simplicity and versatility. They are beginner-friendly and have a large community of users. Arduino boards are known for their easy-to-use IDE and extensive library support.
- **ESP32**: ESP32 boards are popular for Internet of Things (IoT) projects. They provide built-in
    
    Wi-Fi and Bluetooth connectivity, making them suitable for applications that require wireless communication. ESP32 boards have a low power consumption and are often used for projects involving remote monitoring.
    
- **Raspberry Pi**: Raspberry Pi boards are single-board computers that offer powerful processing capabilities. They are commonly used for projects that require more computational power or running operating systems like Linux. Raspberry Pi boards have a rich selection of input/output options and can be used for a wide range of applications.

These examples represent just a small fraction of the available development boards. Each board has its own strengths and target applications, and in order to help you choose the right card for your project, I added in the bottom of this page pictures that illustrate each board models list and a comparison table of each one specs.

## **Production Development Boards:**

In simplifying the understanding of development boards, we can conceptually classify them into two primary categories: Test & Evaluation Boards and Production Boards. While this distinction may not have an official technical basis, comparing the performance of these two types elucidates a practical classification.

The previously mentioned boards typically fall within the Low to Mid Budget and Low to Mid-End range, primarily suited for personal projects rather than professional or mass production endeavors. For projects aiming for higher-end applications, one may turn to more professional development boards. A notable example is the Nvidia Jetson, a leading choice in the market for its robust capabilities.

Additionally, numerous other production-centric boards, such as STM32 and Sharp, cater to specific industrial and professional applications. These boards prioritize factors such as power efficiency, form factor, and reliability, making them suitable for deployment in high-performance and mass production scenarios.

In this documentation, my primary focus will be on Test Development Boards due to their widespread affordability and accessibility for a broad audience.

## Setting Up Your Development **Environment:**

Setting up a robust development environment is a critical initial step for seamless hardware programming.

Begin by ensuring you have the correct drivers installed, especially when dealing with specialized cards( like Arduino models lacking the ATmega microprocessor, example : Arduino Nano ft232 ).

Next, choose the suitable Arduino Integrated Development Environment (IDE or code editor) corresponding to your operating system. The link below is the official website of Arduino:
”[https://www.arduino.cc/en/software”](https://www.arduino.cc/en/software%E2%80%9D) , choose accordingly to your operating system.

Following this, prepare the appropriate connection method between your computer and the development card, whether it's USB, UART, or another interface.
( In the first steps we will be using USB interface as a main method to use, and we will be working on other advanced methods ).

In order to prepare your Dev Board for development, you need to connect it through USB port to your pc, check the COM port it is connected to ( For example you can check that by entering device manager in Windows operating systems ) then open the Arduino IDE, go to "Tools," select the correct port from the "Port" submenu, and verify your choice ( Also make sure you are choosing the same card you have ). 

The last step remaining is to write your code. Programming in Arduino C is easy to use yet easy to learn, this link refers to the documentation and more references :
"https://www.arduino.cc/reference/en/". You can also find more built-in code samples in the IDE and I will provide a "Hello World" sample code accompanied with this repo.

##  Summarizing

So, to summarize , in this repo I talked about the difference between Test Dev Boards and Production Boards , how to prepare the development environment, and now I will let you with these images that illustrate : 

-Arduino boards list and comparison

-Arduino IDE interface explore

-Esp32 boards list and comparison

-Raspberry boards list and comparison

### Arduino Models:

![arduino models](https://github.com/Salmen-Abbes/Intro-To-Dev-Boards/assets/114873030/daf3081e-638e-4a67-9a21-e7689959ecbb)

### Arduino Boards Comparison:

![arduino comparison](https://github.com/Salmen-Abbes/Intro-To-Dev-Boards/assets/114873030/6db97b4e-7d38-4b2a-90e9-8402f2fc5bd2)

### Esp32 Boards and Comparison:

![esp32 comparison](https://github.com/Salmen-Abbes/Intro-To-Dev-Boards/assets/114873030/74e0c32e-909d-422e-b982-77b30b711055)

### Raspberry Boards Models and Comparison:

![raspberry comparison](https://github.com/Salmen-Abbes/Intro-To-Dev-Boards/assets/114873030/3188da61-1e89-4412-bd92-edfa21fbf582)

### Arduino IDE Interface

![Arduino IDE Interface](https://github.com/Salmen-Abbes/Intro-To-Dev-Boards/assets/114873030/44845bde-5a6e-48ed-858a-e199f6471219)
