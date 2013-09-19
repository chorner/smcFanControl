//
//  FanUserNotify.h
//  smcFanControl
//
//  Created by Vik Ewoods on 9/19/13.
//
//

#import <Foundation/Foundation.h>

@interface FanUserNotify : NSObject
{
  
  NSString *unTitleForSix;
  NSString *unTextForSix;
  NSString *unTitleForSeven;
  NSString *unTextForSeven;
  NSString *unTitleForSevenFive;
  NSString *unTextForSevenFive;
  NSString *unTitleForEight;
  NSString *unTextForEight;
  NSString *unTitleCriticalHot;
  NSString *unTextCriticalHot;
}

-(IBAction)pushNotificationToUserWithParams:(id)sender unTitle:(NSString *)a_title unText:(NSString *)a_text;

@end
