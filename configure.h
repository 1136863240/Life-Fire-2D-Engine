#pragma once
//选项被注释为关闭，未被注释为开启
#define SafetyPriority /*安全动画
                        开启后进行删除图元的实际动作进行前保证所有动画都已经实际结束，导致删除每个图元会延迟2ms*/
#define SelfAdaption /*布局自适应，开启后窗口将默认为全屏，所有元件位置和尺寸自动适应屏幕大小*/
//#define AutoIsColliding /*自动碰撞检测
//                        开启后可以挂载两个图元的碰撞检测槽，并在每次发生图元移动时自动触发检测所有挂载图元的碰撞情况并触发相应槽*/
