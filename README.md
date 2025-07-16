# **Third Person Shooter**

**Third Person Shooter** is a 3D action-combat game built in **Unreal Engine 5** featuring tactical AI-driven enemies and precision-based gunplay mechanics. Players engage in strategic combat encounters where situational awareness, accurate shooting, and tactical positioning determine survival in intense firefights.

---

## 📖 **Game Overview**

Enter a combat arena where every bullet counts and enemy AI adapts to your playstyle. As a skilled operative, you must eliminate all hostile forces using precision shooting and tactical movement. Face intelligent enemies that utilize cover, coordinate attacks, and respond dynamically to your actions through advanced behavior tree systems.

---

## 🎯 **Core Gameplay Systems**

### 🔫 **Player Combat & Movement**
- Hybrid **C++/Blueprint architecture**: C++ foundation with Blueprint inheritance for performance and flexibility.
- Responsive third-person movement with full directional control, mouse look, jumping, and shooting.
- **Health system**: Percentage-based tracking with visual damage feedback and clear death states.

### 🔫 **Weapon System & Ballistics**
- Modular gun system attached via **socket-based positioning**.
- **Ray-tracing ballistics** for instant-hit detection.
- Smart collision filtering (ignores self and weapon).
- Enhanced with **muzzle flash, impact particles, and spatial audio**.

### 🧠 **Enemy AI Framework**
- Built on **Unreal's Behavior Tree architecture** with custom services and tasks.
- **Dual-tracking system**: Enemies track via line of sight or memory of last known location.
- AI remembers spawn points for patrol and retreat patterns.

---

## 🤖 **AI Behavior Logic**

### 🎯 **Intelligent Perception System**
- Advanced **line-of-sight detection** with conditional AI knowledge updates.
- Custom behavior tree services for continuous tracking and memory handling.
- Enemies react intelligently without being omniscient.

### 🎯 **Dynamic Combat Responses**
- AI can use player weapons for consistent mechanics.
- Behavior adapts based on player actions and environment.

---

## 🎮 **Game Flow & Victory Conditions**

### ✅ **Kill-Em-All Game Mode**
- Eliminate all AI enemies to win.
- Player death triggers immediate game over.
- Automatic detection for win/lose states.

### 🖥️ **UI & Restart System**
- Context-sensitive UI with win/lose feedback.
- Automatic restart timer for seamless flow.

---

## 🛠️ **Technical Highlights**

### ⚙️ **Performance & Architecture**
- Clean **modular codebase**: movement, combat, AI, UI.
- **Optimized ray-tracing** for efficient hit detection.
- Safe memory management with null checks and pointer safety.
- Hybrid development approach: **C++ for performance**, **Blueprints for logic**.

### 🧩 **AI System Design**
- Behavior tree with service-based player monitoring.
- Modular tasks for diverse enemy behaviors.
- **Blackboard communication** for real-time decision-making.

---

## 🎯 **Key Features**
- **Tactical Combat**: Precision shooting with timing.
- **Intelligent Enemies**: AI responds to player with realistic perception.
- **Dynamic Game Flow**: Seamless win/lose detection with UI transitions.
- **Hybrid Development**: C++ performance + Blueprint iteration.
- **Scalable AI Framework**: Modular behavior trees for diverse AI types.

---

> This project demonstrates solid understanding of **game architecture**, **AI programming**, and **performance optimization**, delivering an engaging tactical shooter experience.
