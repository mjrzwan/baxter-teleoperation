# Gripper for Baxter Robot 🤖  

This project showcases the design and development of a custom gripper for the **Baxter robot** from Rethink Robotics, aimed at handling fragile objects like eggs with precision and care. The project integrates mechanical design, electronics, and robotic control, demonstrating the interdisciplinary approach required for real-world robotic applications.

---

## 📖 Overview  
The goal of this project was to design a gripper capable of handling delicate objects without causing damage. The gripper was integrated with the **Baxter robot** and used a custom force monitoring system to ensure safe and precise handling. The robot’s actions were programmed using **ROS** (Robot Operating System), and the system's electronics were managed through an **Arduino Nano** and a custom **PCB**.

---

## 🎯 Features  
### Key Components:
1. **Gripper Design**:  
   - Designed using **Autodesk Inventor** for optimized precision in handling delicate objects.  
   - Tested to ensure no damage to fragile items like eggs.  
2. **Force Monitoring System**:  
   - Implemented an **Arduino Nano** microcontroller and **custom PCB** to measure and record the force exerted during handling.  
   - System ensured safe and reliable object manipulation by adjusting force in real time.  
3. **Robotic Integration**:  
   - Programmed the **Baxter robot** using **ROS** to handle objects safely, incorporating the gripper for automation tasks.  
4. **Electronics**:  
   - Designed custom circuits, selected appropriate batteries, and fabricated a PCB to integrate the electronic components.  

---

## 🛠️ Technical Details  
### Tools & Technologies  
- **Mechanical Design**: **Autodesk Inventor**  
- **Electronics**: **Arduino Nano**, **Custom PCB**  
- **Robotic Programming**: **ROS** (Robot Operating System)  
- **Force Monitoring**: Custom sensor integration for force data recording.  

### Key Deliverables  
- A fully functional **gripper design** optimized for fragile object handling.  
- A **force monitoring system** capable of recording pressure data during operations.  
- **ROS-based control system** programming to handle objects with the Baxter robot.  
- A **custom PCB** and electronics circuit to integrate all hardware components.  

---

## 🔧 Setup & Usage  
### Prerequisites  
- **ROS**: Installed on a computer with access to the Baxter robot.
- **Arduino IDE**: For programming the Arduino Nano and uploading code.
- **Autodesk Inventor**: To view or modify the gripper design files.

### Running the Project  
1. Clone the repository:  
   ```bash  
   git clone https://github.com/YourUsername/baxter-delicate-gripper.git  
   ```  
2. Open the **Autodesk Inventor** file for the gripper design and make modifications as needed.  
3. Load the **ROS** package for Baxter control.  
4. Program the **Arduino Nano** using the provided code to integrate the force monitoring system.  
5. Test the full integration by running the ROS scripts to control Baxter’s movements and monitor the force data.  

---

## 📈 Results & Insights  
- Successfully designed a gripper capable of handling fragile objects with minimal risk of damage.  
- Integrated a robust **force monitoring system** to ensure safe manipulation of delicate objects.  
- Demonstrated strong interdisciplinary collaboration between mechanical, electrical, and software systems.  

---

## 🔮 Future Improvements  
- Implement real-time force adjustment algorithms for adaptive object handling.  
- Expand the gripper’s capabilities to handle a wider variety of fragile objects.  
- Investigate integration with other robotic platforms beyond **Baxter**.  

---

## 🛡️ License  
This project is licensed under the **MIT License**. See the `LICENSE` file for more details.

---

## ✉️ Contact  
For further questions or collaboration opportunities:  
- **Name:** Mohammed Rizwan 
- **Email:** mjrzwn@gmail.com  
- **LinkedIn:** https://www.linkedin.com/in/mjrzwan/
