//
//  DispatchTimer.h
//  MADDocScan
//
//  Created by sjhz on 2018/6/14.
//  Copyright © 2018年 梁宪松. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DispatchTimer : NSObject
/**
 创建dispatch定时器
 
 @param timerName 定时器名称
 @param interval 时间间隔
 @param queue 运行的队列(默认为全局并发队列)
 @param repeats 是否重复
 @param action 执行的动作
 */
+ (void)scheduleDispatchTimerWithName:(NSString *)timerName
                         timeInterval:(double)interval
                                queue:(dispatch_queue_t)queue
                              repeats:(BOOL)repeats
                               action:(dispatch_block_t)action;

/**
 取消dispatch定时器
 
 @param timerName 定时器名称
 */
+ (void)cancelTimerWithName:(NSString *)timerName;

/**
 取消所有创建的dispatch定时器
 */
+ (void)cancelAllTimer;

@end
