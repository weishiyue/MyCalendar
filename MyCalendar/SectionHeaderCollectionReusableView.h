//
//  SectionHeaderCollectionReusableView.h
//  MyCalendar
//
//  Created by syweic on 14/11/21.
//  Copyright (c) 2014年 ___iSoftStone___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SectionHeaderCollectionReusableView : UICollectionReusableView

@property (nonatomic, copy) void (^plusOrMinusMonthBlock) (NSDate *otherMonthDate);

@end
