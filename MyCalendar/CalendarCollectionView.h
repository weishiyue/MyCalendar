//
//  CalendarCollectionView.h
//  MyCalendar
//
//  Created by syweic on 15/3/6.
//  Copyright (c) 2015年 ___iSoftStone___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SelectDateProtocol.h"
#import "SYCollectionView.h"

@class ShowYearAndMonthView;

typedef NS_ENUM(NSInteger, SYShowYearAndMonthType){
    //SYShowYearAndMonthTypeNever,
    SYShowYearAndMonthTypeOnHeader,
    SYShowYearAndMonthTypeOnNavigation
};

@interface CalendarCollectionView : UIView

@property(nonatomic, assign) id<SelectDateProtocol> selectDateDelegate;

@property(nonatomic, copy) void (^selectDateBlock)(MyCalendarDayModel* dayModel);

@property (nonatomic, strong) NSDate *baseDate;
@property (nonatomic, strong) ShowYearAndMonthView *showYMView;


-(instancetype)initWithFrame:(CGRect)frame year:(NSInteger)year month:(NSInteger)month;


-(void)showYearAndMonthWith:(SYShowYearAndMonthType)type;

-(void)showOtherCalendarViewWith:(NSInteger)months;

@end
