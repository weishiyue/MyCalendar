//
//  MyCalendarObject.h
//  MyCalendar
//
//  Created by syweic on 14/11/24.
//  Copyright (c) 2014年 ___iSoftStone___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyCalendarObject : NSObject

/*
 * 获取 农历中的 月 和 日
 */
+(NSDictionary*)getChineseCalendarWith:(NSDateComponents*)components;
/*
 * 获取 公历 节日
 */
+(NSString*)getGregorianHolidayWith:(NSDateComponents*)components;

+(NSCalendar*)getCalendarWith:(NSString*)calendarIndentifier;

/*
 * 获取 年、月、日 日历单元
 */
+(NSCalendarUnit)getYMDCalendarUnit;

/*
 * 计算 date 所在 月份 的天数
 */

+(NSUInteger)getNumberOfDaysInCurrentMonthWith:(NSDate*)date;

@end
